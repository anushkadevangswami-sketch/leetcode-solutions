class Solution {
public:
vector<int> path;
        vector<vector<int>> ans;
        void solve (int start,int k,int n){
            if(path.size()==k){
                if(n==0){
                    ans.push_back(path);
                }
                return ;
            }
            for(int i = start; i<=9; i++){
                if(i>n){
                    break;
                }
                path.push_back(i);
                solve(i + 1,k,n-i);
                path.pop_back();
            }
        }
    vector<vector<int>> combinationSum3(int k, int n) {
        solve(1,k,n);
        return ans ;
    }
};