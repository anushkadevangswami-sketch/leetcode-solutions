
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> squares;

        // Square every element, including negative numbers
        for (int x : nums) {
            squares.push_back(1LL * x * x);
        }

        // Sort the squared values
        sort(squares.begin(), squares.end());

        int n = squares.size();
        long long score = 0;

        // Subtract the smallest n/2 squares
        for (int i = 0; i < n / 2; i++) {
            score -= squares[i];
        }

        // Add the largest n/2 squares
        for (int i = n / 2; i < n; i++) {
            score += squares[i];
        }

        return score;
    }
};
