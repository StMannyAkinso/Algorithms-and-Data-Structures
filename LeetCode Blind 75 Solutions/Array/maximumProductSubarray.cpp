#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_so_far = nums[0], min_so_far = nums[0], answer = nums[0];
        
        for (int i = 1; i < n; i++) {
            int curr = nums[i];
            
            // Find the maximum product subarray ending at index i.
            int temp_max = max(curr, max(max_so_far * curr, min_so_far * curr)); 
            int temp_min = min(curr, min(max_so_far * curr, min_so_far * curr));
            
            // Update max_so_far and min_so_far
            max_so_far = temp_max;
            min_so_far = temp_min;
            
            // Update answer to be the maximum of answer and max_so_far.
            answer = max(answer, max_so_far);
        }
        
       
        return answer;
    }
};
