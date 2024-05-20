#include<iostream>
using namespace std;

void swapwithtemp(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swapwithswap(int &a, int &b){
    swap(a,b);
}

void swapwitharth(int &a, int &b){
    int sum = a + b;
    a = sum - a;
    b = sum - b;
}


int main() {
    int a = 1, b = 0;
    cout << "Before swap: " << "a = " << a << " b = " << b << endl;
    swapwithtemp(a,b);
    cout << "swapwithtemp: " << "a = " << a << " b = " << b << endl;
    swapwitharth(a,b);
    cout << "swapwitharth: " << "a = " << a << " b = " << b << endl;
    swapwithswap(a,b);
    cout << "swapwithswap: " << "a = " << a << " b = " << b << endl;
    return 0;
}