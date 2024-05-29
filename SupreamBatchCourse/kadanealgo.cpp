#include <iostream>
#include <vector>
using namespace std;

int kadanealgo(vector<int> &v)
{
    int sum = 0;
    int ans = INT_MIN;

    for (auto e : v)
    {
        sum += e;
        ans = max(ans, sum);
        if (sum < 0)
            sum = 0; 
    }

    return ans;
}

int naive(vector<int> &nums)
{
    int ans = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            ans = max(ans, sum);
        }
    }
    return ans;
}

int main()
{
    // vector<int> vec = {5, 4, -10, 7, 8};
    vector<int> vec = {-15, -2, -1, -10, -15};
    cout << kadanealgo(vec);
    //cout << naive(vec);
    return 0;
}