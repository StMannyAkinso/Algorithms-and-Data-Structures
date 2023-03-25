#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        // Initialise the variables
        int maxSum = nums[0];
        int currentSum = nums[0];
        
        // Find max of current sum and max sum
        for(int i = 1; i < n; i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};