class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uniques;

        for (int num : nums) {
            if (!(uniques.insert(num).second)) {
                return true;
            }
        }
        return false;
    }
};