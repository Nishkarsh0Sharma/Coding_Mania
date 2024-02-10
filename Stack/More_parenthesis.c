#include <stdio.h>

//this is best for now .

int isBalanced(char expression[]) {
    int stack = 0;

    for (int i = 0; expression[i] != '\0'; i++) {
        stack += (expression[i] == '(' || expression[i] == '{' || expression[i] == '[') ? 1 :
                 (expression[i] == ')' || expression[i] == '}' || expression[i] == ']') ? -1 : 0;

        if (stack < 0) return 0;
    }

    return stack == 0;
}

int main() {
    char expression[100];

    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);

    printf(isBalanced(expression) ? "Balanced\n" : "Not Balanced\n");

    return 0;
}



// #include <stdio.h>

// #define MAX_SIZE 100

// int isMatching(char opening, char closing) {
//     return (opening == '(' && closing == ')') ||
//            (opening == '{' && closing == '}') ||
//            (opening == '[' && closing == ']');
// }

// int isBalanced(char expression[]) {
//     char stack[MAX_SIZE];
//     int top = -1;  // Initialize top of the stack

//     for (int i = 0; expression[i] != '\0'; i++) {
//         if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[') {
//             // Push opening bracket to stack
//             stack[++top] = expression[i];
//         } else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']') {
//             // Check if stack is empty or if the closing bracket matches the top of the stack
//             if (top == -1 || !isMatching(stack[top], expression[i])) {
//                 return 0;  // Unbalanced
//             } else {
//                 // Pop matching opening bracket from stack
//                 top--;
//             }
//         }
//     }

//     // If the stack is empty, the expression is balanced
//     return (top == -1);
// }

// int main() {
//     char expression[MAX_SIZE];

//     printf("Enter an expression: ");
//     fgets(expression, sizeof(expression), stdin);

//     if (isBalanced(expression)) {
//         printf("The expression is balanced.\n");
//     } else {
//         printf("The expression is not balanced.\n");
//     }

//     return 0;
// }




// #include <iostream>
// #include<cstring>
// #include <stack>
// #include <map>

// using namespace std;
 
// int isBalanced(char* exp){
 
//     // Create map
//     map<char, char> mapping;
//     mapping['}'] = '{';
//     mapping[')'] = '(';
//     mapping[']'] = '[';
 
//     // Create map iterator
//     map<char, char>::iterator itr;
 
//     // Create stack
//     stack<char> stk;
 
//     for (int i=0; i<strlen(exp); i++){
//         if (exp[i] == '{' || exp[i] == '[' || exp[i] == '('){
//             stk.push(exp[i]);
//         } else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')'){
//             if (stk.empty()){
//                 return false;
//             } else {
//                 char temp = stk.top();
//                 itr = mapping.find(exp[i]);
//                 if (temp == itr->second){  // itr->first is key, itr->second is value
//                     stk.pop();
//                 } else {
//                     return false;
//                 }
//             }
//         }
//     }
//     return stk.empty() ? true : false;
// }
 
// int main() {
 
//     char A[] = "{([a+b]*[c-d])/e}";
//     cout << isBalanced(A) << endl;
 
//     char B[] = "{([a+b]}*[c-d])/e}";
//     cout << isBalanced(B) << endl;
 
//     char C[] = "{([{a+b]*[c-d])/e}";
//     cout << isBalanced(C) << endl;
 
//     return 0;
// }
