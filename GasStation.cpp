#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int totalGas = 0, currGas = 0, start = 0;

      for(int i=0 ; i<gas.size(); i++){
        int diff = gas[i] - cost[i];
        totalGas += diff;
        currGas += diff;

      if(currGas < 0){
        start = i+1;
        currGas = 0;
      }
    }  
    if(totalGas < 0){
        return -1;
    }
    return start;
    }
};
int main(){

    return 0;
}