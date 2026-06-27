class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = nums.size();
        int count = 0;
        int currentstreak=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                currentstreak++;
                    if(currentstreak > count){
                        count = currentstreak;
            }
            }else{
                currentstreak=0;
            }
        }
        return count;
    }
};