#include <vector>
#include <algorithm>


using namespace std;
class Solution
{
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
    {
        std::vector<std::vector<int>> result; // Initialize the result vector
        int n = nums.size();                  // Get the size of the input vector
        if (n < 3)
        { // If the input vector has less than 3 elements, return an empty result
            return result;
        }
        std::sort(nums.begin(), nums.end()); // Sort the input vector in non-decreasing order
        for (int i = 0; i < n - 2; ++i)
        { // Loop through the first n-2 elements of the input vector
            if (i > 0 && nums[i] == nums[i - 1])
            { // Skip duplicates of the first element
                continue;
            }
            int j = i + 1; // Initialize the second element index
            int k = n - 1; // Initialize the third element index
            while (j < k)
            {                                          // Loop through the remaining elements using two pointers
                int sum = nums[i] + nums[j] + nums[k]; // Compute the sum of the three elements
                if (sum < 0)
                { // If the sum is less than 0, move the second pointer to the right
                    ++j;
                }
                else if (sum > 0)
                { // If the sum is greater than 0, move the third pointer to the left
                    --k;
                }
                else
                { // If the sum is 0, add the triplet to the result and skip duplicates of the second and third elements
                    result.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nums[j + 1])
                        ++j;
                    while (j < k && nums[k] == nums[k - 1])
                        --k;
                    ++j;
                    --k;
                }
            }
        }
        return result;
    }
};
