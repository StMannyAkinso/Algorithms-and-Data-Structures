#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        // Initialise left and right variables for array 
        int left = 0, right = n - 1;
        int maxArea = 0;
        
        while(left < right) {
            // Find area of width and smallest height
            int h = min(height[left], height[right]);
            int w = right - left;
            int area = h * w;
            maxArea = max(maxArea, area);
            
            // Close in on smallest height side
            if(height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        
        return maxArea;
    }
};
