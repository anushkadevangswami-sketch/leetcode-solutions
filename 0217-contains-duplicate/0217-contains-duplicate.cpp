class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> inSet ;
        int n=nums.size() ;
        for(int i=0;i<n;i++){
            if(inSet.find(nums[i])!=inSet.end()){
                return true ;
            }
            inSet.insert(nums[i]);
        }
        return false ;
    }
};