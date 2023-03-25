#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        
        // Initialise left and right product arrays
        vector<int> left(n, 1);
        vector<int> right(n, 1);
        
        // Product of left and right array
        for(int i = 1; i < n; i++) {
            left[i] = left[i-1] * nums[i-1];
        } 
        for(int i = n-2; i >= 0; i--) {
            right[i] = right[i+1] * nums[i+1];
        }
        
        vector<int> product(n, 1);
        for(int i = 0; i < n; i++) {
            product[i] = left[i] * right[i];
        }
        
        return product;
    }
};
