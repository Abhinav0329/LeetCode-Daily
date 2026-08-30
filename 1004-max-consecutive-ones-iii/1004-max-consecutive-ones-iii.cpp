class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxcount = 0,countzeros = 0;
        int len = 0;
        int n = nums.size();
        int r = 0,l = 0;
        while(r < n){
        // Expand window: count zero at right pointer 'r'
            if(nums[r]==0){
                countzeros++;
            }
            // Expand window: count zero at right pointer 'r'
                while(countzeros > k){
                    if(nums[l]==0){
                        countzeros--;
                    }
                    l++;// Always increment left pointer
                }
            // Record maximum valid window size
                    len = r-l+1;
                    maxcount = std::max(maxcount,len);
                    r++;    // move right pointer
            }
        return maxcount;
    }
};


/*
int n = static_cast<int>(nums.size());
        int maxcount = 0;
        int len = 0;
        for(int i=0;i<n;i++){
            int countzeros = 0;
            for(int j=i;j<n;j++){
                if(nums[j] == 0){
                    countzeros++;
                }
                    if(countzeros <= k){
                        len = j - i + 1;
                        maxcount = std::max(maxcount,len);
                    }
                    else{
                        break;// Exceeded k zeros, stop expanding from starting index i
                    }
                }
            }
        return maxcount;
*/