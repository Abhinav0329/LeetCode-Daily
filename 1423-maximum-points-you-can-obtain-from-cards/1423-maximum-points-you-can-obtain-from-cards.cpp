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