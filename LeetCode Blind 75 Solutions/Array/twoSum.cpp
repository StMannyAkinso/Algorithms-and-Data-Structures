#include <vector>
#include <algorithm>


using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        std::unordered_map<int, int> hash_map;
        for (int i = 0; i < nums.size(); ++i)
        {
            int num2 = target - nums[i];
            if (hash_map.find(num2) != hash_map.end())
            {
                return {hash_map[num2], i};
            }
            hash_map[nums[i]] = i;
        }
        return {};
    }
};