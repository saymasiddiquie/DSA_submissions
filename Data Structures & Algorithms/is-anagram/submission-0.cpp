class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(char i : s){
            mp1[i]++;
        } 
        for(char x: t){
            mp2[x]++;
        } 
        for(auto i: mp1){
            if(mp1[i.first]!=mp2[i.first]){
                return false;
            }
        }
        return true;

    }
};
