#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)){
            return false;
        }
        int Halfreversed = 0;
        while(x > Halfreversed){
            Halfreversed = Halfreversed * 10 + x % 10;
            x /= 10;
        }

        return (x==Halfreversed || x==Halfreversed/10);

    }
};
int main(){
    return 0;
}