#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingnumwithduplicates(vector<int>&vec){
    sort(vec.begin(),vec.end());
    int i = 0;
    for(auto e: vec) {
        i++;
        if(e != i)
            break; 
    }
    return i;
}
int missingnumwithduplicates2(vector<int>&vec){
    vec.insert(vec.begin(), 737);
    int index = 1;
    for( int i = 1; i< vec.size(); i++) {
        index = abs(vec[i]);
        if(vec[index] > 0) vec[index] *= -1;
    }

    for(int i = 1; i< vec.size(); i++)
        cout << vec[i] << " ";
    
    cout<<endl;
    
    int missingno = -1;
    for(int i=1; i<vec.size();i++) {
        if(vec[i] > 0) {
            missingno = i;
            break;
        }
    }
    return missingno;
}

int main() {
    vector<int> vec = {1,3,5,3,4};
    //vector<int> vec = {1,3,5,3,4};
    //cout << missingnumwithduplicates(vec);
    cout << missingnumwithduplicates2(vec);

    return 0;
}