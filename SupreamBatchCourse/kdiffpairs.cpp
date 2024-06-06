#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int findPairs(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int,int> um;
        
        vector<int> arr;
        int ans = 0;

        for(int i = 0; i<n/2 ; i++){
            for (int j = i+1; j<n; j++){
                int diff = nums[i] - nums[j];
                if(abs(diff) == k){
                    ans++;
                    break;
                }
            }
        }
        return ans;        
    }
int main() {

    vector<int> vec = {3,1,4,1,5};
    int k = 2;

    cout << findPairs(vec,k);
    
    return 0;
}