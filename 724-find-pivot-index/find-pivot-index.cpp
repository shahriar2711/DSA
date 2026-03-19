class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefsum(n,0);
        vector<int>sufsum(n,0);

        prefsum[0] = nums[0];
        sufsum[n-1] = nums[n-1];

        for(int i = 1;i < n;i++){
            prefsum[i] = prefsum[i-1] + nums[i];
        }

        for(int i = n-2;i >= 0;i--){
            sufsum[i] = sufsum[i+1] + nums[i];
        }

        for(int i = 0;i < n;i++){
            if(prefsum[i] == sufsum[i]){
                return i;
            }
        }
        return -1;
    }
};