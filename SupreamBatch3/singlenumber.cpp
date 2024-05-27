#include<iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,1,2,3,4,5};
    int ans = 0;
    for (auto a:arr) {
        ans ^= a;
    }
    cout << ans;
    return 0;
}