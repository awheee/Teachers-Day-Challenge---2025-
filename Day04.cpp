class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int x = 0; x < nums.size(); x++) {
            for (int y = x + 1; y < nums.size(); y++) {
                if (nums[y] == target - nums[x]) {
                    return {x, y};
                }
            }
        }
        return {};
    }
};
