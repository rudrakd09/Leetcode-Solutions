#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxwords=0;
        for(string s: sentences){
            int spaces= 0;
            for(char c: s){
                if(c == ' '){
                    spaces++;
                }
            }
            maxwords = max(maxwords, spaces+1);
        }
        return maxwords;
        
    }
};
int main(){

    return 0;
}