#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int value = 0;
       
       for(string op: operations){
        if(op[1] == '+'){
            value++;
        }else{
            value--;
        }
       }
       return value;
        
    }
};
int main(){

    return 0;
}