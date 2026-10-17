// Checks if an array can be rearranged to form an arithmetic progression.
// Returns true if the difference between consecutive elements remains constant, otherwise false.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
    bool canMakeArithmeticProgression(vector<int>& arr){
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        bool isAP = true;
        for( int i = 1; i < arr.size(); i++){
            int newdiff = arr[i] - arr[i-1];
            if(diff != newdiff) isAP = false;
        }

        return isAP;
    }

};

int main (){

    vector<int> test = {3, 2, 5, 1, 3};
    Solution solution;
    if(solution.canMakeArithmeticProgression(test)){
        cout << "Is an arithmetic Progession";
    }else{
        cout << " Isn't an Arithmetic Progession";
    }

    return 0;
}