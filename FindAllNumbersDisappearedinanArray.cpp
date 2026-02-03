#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int idX = abs(nums[i]) - 1;
            if(nums[idX] > 0){
                nums[idX] = -nums[idX];
            }
        }
        vector<int> result;
        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                result.push_back(i+1);
            }
        }
        return result;
    }
};
int main(){

    return 0;
}