class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0;
        int cnt2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(cnt1==0&&nums[i]!=el2){
                cnt1=1;
                el1=nums[i];
            }
            else if(cnt2==0&&nums[i]!=el1){
                cnt2=1;
                el2=nums[i];
            }
            else if (nums[i]==el1){
                cnt1++;
            }
            else if (nums[i]==el2){
                cnt2++;
            }
            else{
                cnt1--,cnt2--;
            }
        }
        vector<int>ls;
        int ct1=0,ct2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el1) ct1++;
            if(nums[i]==el2) ct2++;
        }
       int n = nums.size();
       int mini = n/3 + 1;
       if(ct1>=mini) ls.push_back(el1);
       if(ct2>=mini) ls.push_back(el2);
       return ls;
    }
};