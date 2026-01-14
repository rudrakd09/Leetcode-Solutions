#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int freq[26] = {0};
        for(char c:s){
            freq[c - 'a']++;
        }
        for(char c:t){
            freq[c - 'a']--;
            if(freq[c-'a'] < 0){
                return false;
            }
        }
        return true;

    }
};
int main(){

    return 0;
}