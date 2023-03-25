#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        // Initialise left and right variables in the array
        int left = 0;
        int right = nums.size() - 1;
        
        // Binary search to find minimum of left and right
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            }
            else {
                right = mid;
            }
        }
        
        return nums[left];
    }
};
