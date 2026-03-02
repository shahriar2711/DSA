class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currmax = nums[0];
        int globemax = nums[0];
        
        for(int i = 1;i<nums.size();i++){
            currmax = max(nums[i],nums[i]+currmax);
            if(currmax > globemax){
                globemax = currmax;
            }
        }
        return globemax;
    }
};