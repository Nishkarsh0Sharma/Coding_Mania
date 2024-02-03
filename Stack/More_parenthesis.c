#include <stdio.h>

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

