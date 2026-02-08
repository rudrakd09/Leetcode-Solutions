#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nextIndex(vector<int>& nums, int i){
        int n = nums.size();
        return((i + nums[i]) % n + n) % n;
    }
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        for(int i=0 ; i<n; i++){
            if(nums[i] == 0) continue;

            int slow = i, fast = i;
            bool isForward = nums[i] > 0;

            while(true){
                int nextSlow = nextIndex(nums, slow);
                if ((nums[nextSlow] > 0) != isForward || nums[nextSlow] == 0)
                    break;

                int nextFast = nextIndex(nums, fast);
                if ((nums[nextFast] > 0) != isForward || nums[nextFast] == 0)
                    break;

                nextFast = nextIndex(nums, nextFast);
                if ((nums[nextFast] > 0) != isForward || nums[nextFast] == 0)
                    break;

                slow = nextSlow;
                fast = nextFast;

                if(slow == fast){
                    if(slow == nextIndex(nums, slow)){
                        break;
                    }
                    return true;
                }
            }
            int idx = i;
            while(nums[idx] != 0 && (nums[idx] > 0) == isForward){
                int next = nextIndex(nums, idx);
                nums[idx] = 0;
                idx = next;
            }


        }
        return false;

    }
};
int main(){

    return 0;
}