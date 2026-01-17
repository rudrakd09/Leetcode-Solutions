#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maximum = nums[0];

        for(int i=1; i<nums.size(); i++){
            currentSum = max(nums[i], currentSum +  nums[i]);
            maximum = max(maximum, currentSum);
        }
        return maximum;
    }
};
int main(){

    return 0;
}