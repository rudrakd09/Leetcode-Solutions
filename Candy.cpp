#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int candy(vector<int>& ratings) {
        int x = ratings.size();
        vector<int> candies(x, 1);

        for(int i= 1; i < x; i++){
            if(ratings[i] > ratings[i - 1]){
                candies[i] = candies[i-1] + 1;
            }
        }

        for(int i = x-2; i >= 0; i--){
            if(ratings[i] > ratings[i+1]){
                candies[i] = max(candies[i], candies[i+1] + 1);
            }
        }
        int total = 0;
        for(int c: candies){
            total += c;
            
        }
        return total;
    }
};
int main(){

    return 0;
}