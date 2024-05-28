#include<iostream>
#include<vector>
using namespace std;

vector<int> find2scompliment(vector<int> binary) {
    int n = binary.size(); // size of the input vector
    vector<int> twoscomp(n,0); //initilize the vector with size same as input vector and zeros

    //step 1. flip the input array and put it in 2's compliment vector i.e., ones compliment
    for (int i = 0; i< n; i++) {
        twoscomp[i] = binary[i] == 0 ? 1 : 0;
    }

    //step 2. add carry with 1 ones compliment
    int carry = 1;
    for(int i = 0; i<n ; i++) {
        int sum = twoscomp[i] + carry;
        twoscomp[i] = sum % 2;
        carry = sum/2;
    }

    return twoscomp;
}

int main() {

    vector<int> binary = {0,1,1,0,1}; // input vector
    vector<int> twoscomp = find2scompliment(binary); //compute 2's compliment in function
    int n = twoscomp.size(); // get the size of 2's compliment vector

    // print the 2's compliment
    for(int i = 0; i < n; i++) {
        cout << twoscomp[i] << " ";
    }
    cout << endl;

    return 0;
}