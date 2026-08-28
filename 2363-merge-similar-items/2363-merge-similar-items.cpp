class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>mp ;
        for(auto item : items1){
            int value=item[0] ;
            int weight=item[1] ;
            mp[value]+=weight ;
        }
        for(auto item : items2){
            int value=item[0];
            int weight=item[1] ;
            mp[value]+=weight ;
        }
        vector<vector<int>> ret ;
        for(auto pair : mp){
            ret.push_back({pair.first,pair.second});
        }
        return ret ;
    }
};