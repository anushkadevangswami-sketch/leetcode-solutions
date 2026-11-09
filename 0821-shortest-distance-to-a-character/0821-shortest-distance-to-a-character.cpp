
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;

        for(int i = 0; i < s.length(); i++) {
            int mini = INT_MAX;

            for(int j = 0; j < s.length(); j++) {
                if(s[j] == c) {
                    int dist = abs(i - j);
                    mini = min(mini, dist);
                }
            }

            ans.push_back(mini);
        }

        return ans;
    }
};
