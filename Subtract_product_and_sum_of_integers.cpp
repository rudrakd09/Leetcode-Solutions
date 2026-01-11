#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        long long product = 1;
        long long sum = 0;

        while(n > 0){
            int num = n % 10;
            product *= num;
            sum += num;
            n /= 10;
        }
        return (int) (product - sum);

    }
};
int main(){
    return 0;
}