class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] >= 0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        int n = pos.size();
        int m = neg.size();
        if(m == 0){
            for(int i = 0;i < n;i++){
                pos[i] = pos[i] * pos[i];
            }
            return pos;
        }
        if(n == 0){
            for(int i = 0;i < m;i++){
                neg[i] = neg[i] * neg[i];
            }
            reverse(neg.begin() , neg.end());
            return neg;
        }
        for(int i = 0; i < m;i++){
            neg[i] = neg[i] * neg[i];
        }
        reverse(neg.begin() , neg.end());
        for(int i = 0; i < n;i++){
            pos[i] = pos[i] * pos[i];
        }
        int i = 0;
        int j = 0;
        vector<int>res;
        while(i < n && j < m){
            if(pos[i] < neg[j]){
                res.push_back(pos[i]);
                i++;
            }else{
                res.push_back(neg[j]);
                j++;
            }
        }
        while(i < n){
            res.push_back(pos[i]);
            i++;
        }
        while(j < m){
            res.push_back(neg[j]);
            j++;
        }
        return res;
    }
};