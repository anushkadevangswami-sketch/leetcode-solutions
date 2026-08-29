class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> startingCities ;
        for(auto path : paths){
            startingCities.insert(path[0]);
        }
        for(auto path : paths){
            if(startingCities.find(path[1])==startingCities.end()){
                return path[1] ;
            }
        }
        return "" ;
    }
};