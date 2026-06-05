#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> operation(vector<int> nums, int n)
{
    vector<int> ans;

    for(int i = 0; i < n; i++)
    {
        int count = 1;

        for(int j = 0; j < n; j++)
        {
            if(j != i)
            {
                count *= nums[j];
            }
        }

        ans.push_back(count);
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,4,6};
    int n= nums.size();
    vector<int> newarr= operation(nums,n);
    for(int i=0;i<n;i++){
        cout << newarr[i] << " ";
    }

}