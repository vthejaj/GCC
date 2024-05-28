#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int find_singlenumber_xor(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i<size; i++) {
        ans ^= arr[i];
    }
    return ans;
}

int find_singlenumber_hashmap(vector<int> vec) {

    int n = vec.size();

    unordered_map<int,int> UM;
    unordered_map<int,int>::iterator it;

    for(int i = 0; i< n; i++) {

        UM[vec[i]] += 1;
    }

    for(it = UM.begin(); it != UM.end(); it++) {
        int key = it->first;
        int value = it->second;
        if(value == 1)
            return key;
    }

    return -1;
}

int find_singlenumber_sort(vector<int> vec) {
    int n = vec.size();
    sort(vec.begin(), vec.end());
    
    for(int i=0; i<=n-1; i+=2) {
        if(vec[i] != vec[i+1]) {
            return vec[i];
        }
    }
    return -1;
}

int main() {
/*
    int arr[] = {1,2,3,4,1,2,3,4,5};
    int size = 9;
    cout << find_singlenumber_xor(arr,size);
*/

/*
    vector<int> vec = {1,2,3,4,1,2,3};
    cout << find_singlenumber_sort(vec);
*/
    vector<int> vec = {1,2,3,4,1,2,3};
    cout << find_singlenumber_hashmap(vec);

    return 0;
}