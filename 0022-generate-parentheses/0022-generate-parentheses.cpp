class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<char> stack ;
        vector<string> res ;
        function <void(int,int)> backtrack = [&](int open,int close){
            if(open==close && open==n){
                string curr (stack.begin(),stack.end());
                res.push_back(curr);
                return ;
            }
            if(open<n){
                stack.push_back('(');
                backtrack(open+1,close);
                stack.pop_back() ;
            }
            if(open>close){
                stack.push_back(')');
                backtrack(open,close+1);
                stack.pop_back();
            }
        };
        backtrack(0,0);
        return res;
    }
};