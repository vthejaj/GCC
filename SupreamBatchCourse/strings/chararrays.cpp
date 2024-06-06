#include<iostream>
using namespace std;

int findLength(char arr[], int size){
    int len = 0;
    for(int i = 0; i< size; i++){
        if(arr[i] == '\0') break;
        len++;
    }

    return len;
}

char toUpper(char ch){
    if(ch >= 'a' && ch <= 'z')
        ch = ch - 'a' + 'A';
    return ch;
}

char toLower(char ch) {
    if(ch >= 'A' && ch <= 'Z')
        ch = ch - 'A' + 'a';
    return ch;
}


int main() {
    int size = 100;
    char arr[100];
    cout << "Enter characters: ";
    cin >> arr;
    int chcount = findLength(arr, size);
    cout << "No of characters entered: " << chcount;
       
    cout << endl << "Covert to Lower: " ;
    for (int i = 0; i < chcount; i++){
        cout << toLower(arr[i]) << " ";
    }
    cout << endl << "Covert to Upper: " ;
    for (int i = 0; i < chcount; i++){
        cout << toUpper(arr[i]) << " ";
    }
    cout << endl;
    return 0;
}