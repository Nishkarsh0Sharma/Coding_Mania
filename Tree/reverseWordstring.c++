// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;

// string reverseStringWordWise(str A[])
// {
//     //Write your code here
//     char t;
//     int i,j;
//     for(j=0;A[j]!='\0';j++){}
//     j=j-1;
//     for(i=0;i<j;i++,j--)
//     {
//         t=A[i];
//         A[i]=A[j];
//         A[j]=t;
//     }return A;
// }

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string reverseStringWordWise(string A) {
    stringstream ss(A);
    vector<string> words;
    string word, result;
    
    // Split the input string into words
    while (ss >> word) {
        words.push_back(word);
    }
    
    // Reverse the order of words
    for (int i = words.size() - 1; i >= 0; --i) {
        result += words[i];
        if (i != 0) {
            result += " ";
        }
    }
    
    return result;
}




int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}