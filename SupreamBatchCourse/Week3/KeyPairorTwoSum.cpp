#include<iostream>
#include<algorithm>
using namespace std;

//check in GoG 
//navie TC:O(N*N) SC:O(1)
int TwoSumorKeyPair(int arr[], int size, int target){
     for(int i=0; i < size; i++) {
        for(int j = i+1; j < size; j++){
            int sum = arr[i] + arr[j];
            if (sum == target)
                return sum;
        }
    }
    return -1;
}

//twopointer approach TC:O(NlogN) + O(N) -> O(NlogN) SC:O(1)
//arrange in ascending order 1,2,6,8,45
int TwoSumtwopointer(int arr[], int size, int target) {
    sort(&arr[0],&arr[size]); //TC:O(NlogN)
    int l =0, h=size-1;
    while(l<h){
        int sum = arr[l] + arr[h];
        if (sum == target) return sum;
        else if(sum > target) h--;
        else l++;
    }
    return -1;
}

int main() {
    int arr[] = {1,4,45,6,10,8};
    int size = 6;
    int target = 15;
    //cout << TwoSumorKeyPair(arr, size, target);
    cout << TwoSumtwopointer(arr,size,target);
    
    return 0;
}