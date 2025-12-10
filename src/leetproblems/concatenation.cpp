//this is leet code problem 1929. Concatenation of Array
//only logic part is included here

class Solution {
public:
    vector <int> getConcatenation (vector<int>& nums) {
     int n =nums.size();
     vector<int>ans(2*n);

     for(int i=0;i<2*n;i++){
        ans[i]=nums[i%n];
     }
     return ans;
        
    }
};
