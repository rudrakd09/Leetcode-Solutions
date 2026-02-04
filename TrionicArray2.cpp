#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
       int n = nums.size();
        if (n < 4) return 0;

        const long long NEG = -4e18;

        vector<long long> up(n, NEG), down(n, NEG), up2(n, NEG);
        long long ans = NEG;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                up[i] = nums[i] + nums[i - 1];
                if (up[i - 1] != NEG)
                    up[i] = max(up[i], up[i - 1] + nums[i]);
            }
            if (nums[i] < nums[i - 1]) {
                if (up[i - 1] != NEG)
                    down[i] = up[i - 1] + nums[i];
                if (down[i - 1] != NEG)
                    down[i] = max(down[i], down[i - 1] + nums[i]);
            }
            if (nums[i] > nums[i - 1]) {
                if (down[i - 1] != NEG)
                    up2[i] = down[i - 1] + nums[i];
                if (up2[i - 1] != NEG)
                    up2[i] = max(up2[i], up2[i - 1] + nums[i]);
            }

            ans = max(ans, up2[i]);
        }
        return ans == NEG ? 0 : ans; 
    }
};
int main(){

    return 0;
}