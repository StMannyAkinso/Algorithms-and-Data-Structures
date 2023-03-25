#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Initialise a set 
        unordered_set<int> s;

        for (int num : nums) {
            // If number is in the set 
            if (s.find(num) != s.end()) {
                return true;
            }
            // Add unique number to set
            s.insert(num);
        }
        return false;
    }
};
