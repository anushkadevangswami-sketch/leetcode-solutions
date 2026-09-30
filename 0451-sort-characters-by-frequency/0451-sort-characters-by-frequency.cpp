class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Count frequency of each character
        for (char ch : s) {
            freq[ch]++;
        }

        // Store {character, frequency}
        vector<pair<char, int>> v;

        for (auto it : freq) {
            v.push_back({it.first, it.second});
        }

        // Sort by frequency in decreasing order
        sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) {
            return a.second > b.second;
        });

        // Build the answer
        string ans;

        for (auto it : v) {
            ans += string(it.second, it.first);
        }

        return ans;
    }
};