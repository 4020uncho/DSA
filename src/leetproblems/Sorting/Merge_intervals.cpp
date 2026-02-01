#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end());
      vector<vector<int>> result;
      result.push_back(intervals[0]);
      for(int i=0;i<intervals.size();i++){
        vector<int>& last =result.back();
        vector<int>&current =intervals[i];
        if(current[0]<= last[1]){
            last[1]=max(last[1],current[1]);
        }else{
            result.push_back(current);
        }
      } 
      return result; 
    }
};