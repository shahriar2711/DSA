class Solution {
public:
    string reversePrefix(string s, int k) {
        string s1;
        int j = k-1;
        
        while(j >= 0){
            s1.push_back(s[j]);
            j--;
        }

        for(int i = k;i < s.size();i++){
            s1.push_back(s[i]);
        }

        return s1;
    }
};