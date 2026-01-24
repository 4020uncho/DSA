#include <vector>
#include <algorithm>   
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current = 0;     
        int highest = 0;    
        
        for (int step : gain) {
            current += step;           
            if (current > highest) {
                highest = current;    
            }
        }
        
        return highest;
    }
};