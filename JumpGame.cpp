#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int numsSize = nums.size();
        int maxReach = 0;

        for(int i=0 ; i<numsSize; i++){
            if(i > maxReach){
                return false;
            }
            maxReach = max(maxReach, i + nums[i]);
            }
            return true;
        }
};
int main(){

    return 0;
}