#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int Operations = 0;
        int distinctcount = 0;

        for(int i = 1; i< nums.size();i++){
            if(nums[i]!=nums[i-1]){
                distinctcount++;
            }
            Operations += distinctcount;
        }
        return Operations;
    }
};