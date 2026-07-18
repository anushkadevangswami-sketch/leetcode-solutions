class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = nums[0];
        int largest = nums[0];

        // Find smallest and largest elements
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < smallest)
                smallest = nums[i];

            if (nums[i] > largest)
                largest = nums[i];
        }

        // Find GCD using Euclidean Algorithm
        while (largest % smallest != 0) {
            int rem = largest % smallest;
            largest = smallest;
            smallest = rem;
        }

        return smallest;
    }
};