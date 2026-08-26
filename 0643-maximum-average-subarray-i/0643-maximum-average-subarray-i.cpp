class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = static_cast<int>(nums.size());

        if(n < k) return -1;
        //first window initialization from 0 to k-1;
        double currentSum = 0;
        for(int i=0;i<k;i++){
            currentSum += nums[i];
        }
    
        //window is creating until we get our maxSum for maxAvg
        double maxSum = currentSum;
        for(int right = k;right<n;right++){
            double incoming = nums[right];
            double outgoing = nums[right - k];
            currentSum += incoming - outgoing;
            maxSum = std::max(maxSum,currentSum);
        }
        return maxSum/k;
    }
};