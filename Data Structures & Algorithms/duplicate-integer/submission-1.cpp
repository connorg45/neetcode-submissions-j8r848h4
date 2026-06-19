class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> countMap;

        for(int i = 0; i < nums.size(); i++) {
            countMap[nums[i]]++;

            if(countMap[nums[i]] > 1) return true;
        }

        return false;
    }
};