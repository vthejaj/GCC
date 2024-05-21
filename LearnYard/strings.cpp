#include<bits/stdc++.h>
using namespace std;

int main() {
/*// input string i.e., by word
    string str;
    cin >> str;
    cout << str;
*/
/*
// input string by line
    string line_input;
    getline(cin,line_input);
    cout << line_input;
*/
/*
// input multiple line untill we provide word stop
    string line_input, output;

    while (true) {
        getline(cin,line_input);
        if (line_input == "stop")
            break;
        output = output + line_input + "\n";
    }
    cout << output;
*/
/*
// Plaindrom

    string revstr;
    getline(cin,revstr);
    string str = revstr;
    reverse(str.begin(), str.end());
    cout << revstr; 
    if (str == revstr)
        cout << " is Palindrom";
    else
        cout << " not Plaindrom";
*/
/*
// convert from lower to upper

    string line_input;
    getline(cin, line_input);
    int str_size = line_input.size();

    for (int i = 0; i < str_size; i++){
        if (line_input[i] >= 95 && line_input[i] <= 122) 
            line_input[i] -= 32;
    }
    cout << line_input;
*/
/*
    //plaindrome of entire line
    string line_input;
    getline(cin, line_input);
    int str_size = line_input.size();
    string palindrome_line="";

    for (int i = 0; i < str_size; i++) {
        if (line_input[i] >= 97 && line_input[i] <= 122) {
            palindrome_line += line_input[i] - 32;
        }
        else if (line_input[i] >= 65 && line_input[i] <= 90) {
            palindrome_line += line_input[i];
        }
    }
    string str = palindrome_line;
    reverse(str.begin(), str.end());
    if (str == palindrome_line)
        cout << palindrome_line << " is Plaindrome";
    else 
        cout << palindrome_line << " is not Plaindrome";
*/
    return 0;
}