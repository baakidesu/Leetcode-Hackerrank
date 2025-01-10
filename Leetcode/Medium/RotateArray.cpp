#include <vector>
using namespace std;

//!!!!!!!!!this a fucked up code also it does not work!!!!!!!!

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int dump, dump1;

        for(k; k>0; k--){
            
            dump = nums[0];
            nums[0] = nums[k];
            for(int i = 1; i<nums.size(); i++){
                dump1 = nums[i];
                nums[i] = dump;
                nums[i+1] = dump1;
            }
        }
    }
};