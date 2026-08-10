#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> stored;

        for (int i = 0; i < nums.size(); i++) {
            if (stored.find(nums[i]) != stored.end()) {
                return {i, stored[nums[i]]};
            }

            stored[target - nums[i]] = i;
        }

        return {};
    }
};