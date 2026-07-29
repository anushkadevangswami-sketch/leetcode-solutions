class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector <int> charsFreq(26,0) ;
        for(char c : chars){
            charsFreq[c-'a']++ ;
        }
        int ans =0 ;
        for(string word : words){
            vector<int>wordsFreq (26,0) ;
            for(char c : word){
                wordsFreq[c-'a']++ ;
            }
            bool good = true ;
            for(int i=0 ; i<26 ; i++){
                if(wordsFreq[i]>charsFreq[i]){
                    good=false ;
                    break ;
                }
            }
            if(good){
                ans+=word.length() ;
            }
        }
        return ans ;
    }
};