class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = static_cast<int>(nums.size());

        if(n < k) return -1;
        //first window initialization from 0 to k-1;
        int currentSum = 0;
        for(int i=0;i<k;i++){
            currentSum += nums[i];
        }
    
        //window is creating until we get our maxSum for maxAvg
        int maxSum = currentSum;
        for(int right = k;right<n;right++){
            int incoming = nums[right];
            int outgoing = nums[right - k];
            currentSum += incoming - outgoing;
            maxSum = std::max(maxSum,currentSum);
        }
        return static_cast<double>(maxSum)/k;
    }
};