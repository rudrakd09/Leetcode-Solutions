#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       if(k<0){
        return 0;
       } 
       unordered_map<int, int> freq;
       for(int num: nums){
        freq[num]++;
       }
       int count = 0;

       for(auto it: freq){
        int num = it.first;
        if(k == 0){
            if(it.second >= 2){
                count++;
            }
        }else{
            if(freq.count(num + k)){
                count++;
            }
        }
       }
       return count;
    }
};
int main(){

    return 0;
}