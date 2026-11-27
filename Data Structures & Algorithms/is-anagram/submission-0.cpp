class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> charCounts;

        for (const char c : s) {
            auto it = charCounts.find(c);
            if (it == charCounts.end()) {
                charCounts[c] = 1;
            } else {
                it->second++;
            }
        }

        for (const char c : t) {
            auto it = charCounts.find(c);
            if (it == charCounts.end()) {
                return false;
            }
            if ((--it->second) == 0) {
                charCounts.erase(it);
            }
        }

        if (charCounts.size() > 0) {
            return false;
        } else {
            return true;
        }
    }
};
