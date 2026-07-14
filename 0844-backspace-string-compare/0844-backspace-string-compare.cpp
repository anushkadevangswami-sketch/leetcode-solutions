class Solution {
public:
    string process(string str) {
        string result;

        for (char ch : str) {
            if (ch != '#') {
                result.push_back(ch);
            } else {
                if (!result.empty()) {
                    result.pop_back();
                }
            }
        }

        return result;
    }

    bool backspaceCompare(string s, string t) {
        return process(s) == process(t);
    }
};