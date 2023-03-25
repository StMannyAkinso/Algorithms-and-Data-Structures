#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // Initialise left and right variables for array
        int n = nums.size();
        int left = 0, right = n - 1;
        
        // Loop through array until they meet in middle
        while(left <= right) {
            
            // Find middle point 
            int mid = left + (right - left) / 2;
            
            if(nums[mid] == target) {
                return mid;
            }
            // Binary search to find target
            if(nums[left] <= nums[mid]) {
                if(target >= nums[left] && target < nums[mid]) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
            else {
                if(target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }
        
        return -1;
    }
};
