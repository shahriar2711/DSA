class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>words;
        string word;

        while(ss >> word){
            words.push_back(word);
        }

        string s2;
        for(int i = words.size()-1;i >= 0;i--){
            s2 += words[i];
            if(i != 0){
                s2 += " ";
            }
        }
        return s2;
    }
};