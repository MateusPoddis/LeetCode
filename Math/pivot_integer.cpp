#include <iostream>


using namespace std;

class Solution{
public:
    int pivotInteger(int n) {
        int left = 0, right = 0;
        for(int i = n; i >= 0 ; i--){
            left += i;
        }

        for(int i = n; i >= 0 ; i--){
            if(left - right == right +i){
                return i;
            }
            right+= i;
        }

        return -1;    
    }
};  

int main (){

    Solution test;
    cout << test.pivotInteger(8);
    return 0;
}