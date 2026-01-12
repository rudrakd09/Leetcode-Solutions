#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        for(int i =0; i<address.size(); i++){
            if(address[i] == '.'){
                address.erase(i, 1);
                address.insert(i , "[.]");
                i += 2;
            }
        }
        return address;
    }
};
int main(){
    return 0;
}