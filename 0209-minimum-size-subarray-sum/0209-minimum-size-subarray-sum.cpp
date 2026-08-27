#include<climits>
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0,r = 0;
        int minlen = INT_MAX;// Initialize with infinity
        int sum = 0;
        int n = nums.size();
        while(r < n){
            sum += nums[r];//expand window
            while(sum >= target){
                // 2. While condition is SATISFIED, try to shrink l to find minimum length
                minlen = min(minlen,r-l+1);// Record smaller valid length
                sum -= nums[l];// Try removing left element
                l++;
            }
            r++;//move right pointer
        }
        return (minlen==INT_MAX) ? 0 : minlen;
    }
};