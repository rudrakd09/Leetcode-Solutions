#include <vector>
using namespace std;
#include<set>
#include<algorithm>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> rs;
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;
            
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                
                if (sum == 0) {
                    rs.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } 
                else if (sum > 0) {
                    k--;
                } 
                else {
                    j++;
                }
            }
        }
        
        vector<vector<int>> result(rs.begin(), rs.end());
        return result;   
    }
};
int main(){
    return 0;
}