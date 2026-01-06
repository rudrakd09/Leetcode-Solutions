#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 0;
       int no = 0;
       for(int num : nums){
        if(count == 0){
            no = num;
        }if(num == no){
            count++;
        }else{
            count--;
        }
       }
       return no;
    }
};
int main(){

    return 0;
}