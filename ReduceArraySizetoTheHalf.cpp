#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int x: arr){
            freq[x]++;
        }
        vector<int> counts;
        for(auto &p: freq){
            counts.push_back(p.second);
        }
        sort(counts.rbegin(), counts.rend());
        int removed = 0, ans = 0;
        int half = arr.size()/2;

        for(int c:counts){
            removed += c;
            ans++;
            if(removed >= half)
            break;
        }
        return ans;
    }
};
int main(){

    return 0;
}