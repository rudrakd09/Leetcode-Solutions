#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(int i=0 ;i<accounts.size();i++){
            int CurrentWealth= 0;
            for(int j=0; j<accounts[i].size();j++){
                CurrentWealth += accounts[i][j];
            }
            maxWealth = max(maxWealth, CurrentWealth);
        }
        return maxWealth;
    }
};
int main(){

    return 0;
}