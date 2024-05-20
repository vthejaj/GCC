#include <iostream>
using namespace std;

void inputarray(int arr[], int size){
    for(int i = 0; i<size; i++)
        cin >> arr[i];
}

void printarray(int arr[], int size){
    for(int i =0; i<size; i++)
        cout << arr[i] << " ";
}

void printreversearray(int arr[], int size) {
    for(int i=size-1; i>=0; i--)
        cout << arr[i] << " ";
}

void reversearray(int arr[], int size){
    for(int i =0; i<size/2; i++)
        swap(arr[i],arr[size-i-1]); // 0 -> 4 (5 -0 -1), 1 -> 3 (5 -1 -1)
}

int main() {
    //input size of arr
    int n; cin >> n;
    //input the arr
    int arr[n];
    inputarray(arr,n);
    printarray(arr,n);
    cout << endl;
    printreversearray(arr,n);
    cout << endl;
    reversearray(arr,n);
    cout << endl;
    printarray(arr,n);
    return 0;
}