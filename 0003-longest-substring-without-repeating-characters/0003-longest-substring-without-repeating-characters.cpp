class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxcount = 0;
        int n = static_cast<int>(s.length());
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                bool isUnique = true;
                for(int k=i;k<j;k++){
                    if(s[k] == s[j]){
                        isUnique = false;
                        break;
                    }
                }
                if(isUnique){
                    maxcount = std::max(maxcount,j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return maxcount;
    }
};