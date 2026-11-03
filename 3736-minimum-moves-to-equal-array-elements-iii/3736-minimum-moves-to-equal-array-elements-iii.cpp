class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
         int sum = 0;
         for(int i=0;i<n;i++){
             if(nums[i]<nums[n-1]){
           sum+=abs(nums[i]-nums[n-1]);
        }
         }
       
        return sum ;
    }
};