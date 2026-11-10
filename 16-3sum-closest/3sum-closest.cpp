class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = 0;
        int resSum = 0;
        int maxdiff = INT_MAX;
        for(int i = 0;i < n-2;i++){
            int left = i+1;
            int right = n-1;
            while(left < right){
                sum = nums[i] + nums[left] + nums[right];
                int diff = abs(sum - target);
                if(diff < maxdiff){
                    maxdiff = diff;
                    resSum = sum;
                }
                if(sum == target){
                    left++;
                    right--;
                }else if(sum < target){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return resSum;
    }
};