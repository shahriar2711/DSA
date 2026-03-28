class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string>words;
        while(ss >> word){
            words.push_back(word);
        }

        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;
        int n = pattern.size();
        int m = words.size();
        if(m != n){
            return false;
        }else{
            for(int i = 0;i < pattern.size();i++){
                if((mp1.find(pattern[i]) == mp1.end()) && (mp2.find(words[i]) == mp2.end())){
                    mp1[pattern[i]] = words[i];
                    mp2[words[i]] = pattern[i];
                }else{
                    if((mp1[pattern[i]] != words[i]) || (mp2[words[i]] != pattern[i])){
                        return false;
                    }
                }
            }
            return true;
        }
    }
};