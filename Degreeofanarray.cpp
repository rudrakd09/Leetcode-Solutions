#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int>cnt, first, last;

        for(int i=0; i<nums.size(); i++){
            if(first.find(nums[i]) == first.end()){
                first[nums[i]] = i;
            }
            last[nums[i]] = i;
            cnt[nums[i]]++;
        }
        int degree = 0;
        for(auto x: cnt){
            degree = max(degree, x.second);
        }
        int ans = nums.size();
        for(auto x: cnt){
            if(x.second == degree){
                ans = min(ans, last[x.first] - first[x.first] + 1);
            }
        }
        return ans;
        
    }
};
int main(){
    return 0;
}