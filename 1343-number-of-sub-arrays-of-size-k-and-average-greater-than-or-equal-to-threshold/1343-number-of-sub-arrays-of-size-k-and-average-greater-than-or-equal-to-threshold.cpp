class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = static_cast<int>(arr.size());
        int targetsum = k * threshold;
        int count = 0;
        int windowsum = 0;
        for(int i=0;i<k;i++){
            windowsum += arr[i];
        }
        
        if(windowsum >= targetsum) count++;

        for(int i=k;i<n;i++){
            windowsum += arr[i] - arr[i-k];
            if(windowsum >= targetsum) count++;
        }
        return count;
    }
};