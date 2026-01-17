#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int MaxProduct = nums[0];
        int MinProduct = nums[0];
        int result = nums[0];

        for(int i=1; i<nums.size();i++){
            if(nums[i] < 0){
                swap(MaxProduct, MinProduct);
            }
            MaxProduct = max(nums[i], MaxProduct * nums[i]);
            MinProduct = min(nums[i], MinProduct * nums[i]);

            result = max(result, MaxProduct);
        }
        return result;
    }
};
int main(){

    return 0;
}