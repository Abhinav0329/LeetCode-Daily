//->Min Subarray Sum of Length (n−k)
#include<numeric> // required for accumulate 
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = static_cast<int>(cardPoints.size());
        if(n < k) return -1;
        int total_sum = std::accumulate(std::begin(cardPoints),std::end(cardPoints),0);
        if(n == k) return total_sum;

        int windowsize = n-k;
        int windowsum = 0;
        for(int i=0;i<windowsize;i++){
            windowsum += cardPoints[i];
        }

        int minwindowsum = windowsum;
        for(int right=windowsize;right<n;right++){
            windowsum += cardPoints[right] - cardPoints[right-windowsize];
            minwindowsum = std::min(minwindowsum,windowsum);
        }
        return total_sum - minwindowsum;
    }
};

/*
->Direct Prefix-Suffix Window
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxScore(std::vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        
        // --- STEP 1: Compute initial window (all k cards from the left) ---
        int currentSum = 0;
        for (int i = 0; i < k; ++i) {
            currentSum += cardPoints[i];
        }
        
        // Track the global maximum score found so far
        int maxPoints = currentSum;
        
        // --- STEP 2: Shift cards from Left to Right ---
        // 'left' points to the last picked element on the left side
        // 'right' points to the last available element on the right side
        int left = k - 1;
        int right = n - 1;
        
        // Process until all k cards have been shifted to the right side
        while (left >= 0) {
            currentSum -= cardPoints[left];   // Drop card from left
            currentSum += cardPoints[right];  // Add card from right
            
            // Record maximum points after this swap configuration
            maxPoints = std::max(maxPoints, currentSum);
            
            // Advance pointers to consider the next swap
            left--;
            right--;
        }
        
        return maxPoints;
    }
};

*/