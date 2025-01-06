#include <vector>
using namespace std;

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(n==0){
            return;
        }

        int endIndexOf1 = nums1.size()-1;

        while(n > 0 && m>0){

            if(nums2[n-1] >= nums1[m-1]){
                nums1[endIndexOf1] = nums2[n-1];
                n--;
            }else{
                nums1[endIndexOf1] = nums1[m-1];
                m--;
            }
            endIndexOf1--;
        }

        while(n>0){
            nums1[endIndexOf1] = nums2[n-1];
            n--;
            endIndexOf1--;
        }

 }