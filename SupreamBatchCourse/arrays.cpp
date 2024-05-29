#include <iostream>
using namespace std;

void inputarray(int arr[], int size) {
    cout << "Enter int values into array[]: ";

    for(int i =0; i<size; i++){
        cin >> arr[i];
    }
}

void printarray(int arr[], int size) {
    cout << "Values in the array[]: ";
    for(int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

int arraymax(int arr[], int size) {
    int ans = INT_MIN;
    for(int i = 0; i<size; i++){
        ans = max(ans,arr[i]);
    }
    return ans;
}

int arraymin(int arr[], int size) {
    int ans = INT_MAX;
    for(int i = 0; i<size; i++){
        ans = min(ans,arr[i]);
    }
    return ans;
}

bool linearsearch(int arr[], int size, int sel) {
    bool found = false;
    for(int i = 0; i<size; i++ ){
        if (arr[i] == sel) {
            found = true;
            break;
        }
    }
    return found;
}

void twopointerprint(int arr[], int size) {
    int leftptr = 0, rightptr = size-1;

    while(leftptr <= rightptr){
        /* //version 1
        if(leftptr == rightptr ){
            cout << arr[leftptr] << " ";
        }
        else {
            cout << arr[leftptr] << " ";          
            cout << arr[rightptr] << " ";
        }
        leftptr++; rightptr--;
        */
       
       //version 2
       cout << arr[leftptr] << " ";
       if (leftptr != rightptr) {            
            cout << arr[rightptr] << " ";
       }
       leftptr++; rightptr--;
    }
}

int main () {
    int ARRAY_SIZE = 3;
    int arr[ARRAY_SIZE];
    int size = ARRAY_SIZE;
    
    inputarray(arr, size);
    printarray(arr, size);
    
    cout << endl << "array max: " << arraymax(arr,size);
    cout << endl << "array min: " << arraymin(arr,size);
    
    cout << endl << "element 5: " << (bool) linearsearch(arr, size, 5) << endl;

    twopointerprint(arr, size);

    return 0;
}