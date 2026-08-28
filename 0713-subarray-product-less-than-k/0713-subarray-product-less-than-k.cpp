class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l = 0,r = 0;
        int count = 0;
        int prd = 1;
        int n = nums.size();
        while(r < n){
            prd = prd * nums[r];
            while(l <=r && prd > k){
                prd /= nums[l];
                l++;
            }
            if(prd < k){
                count +=(r-l+1);
            }
            r++;
        }
        return count;
    }
};