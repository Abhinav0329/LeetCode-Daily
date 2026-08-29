class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Direct Map Array initialized to -1 for all 256 ASCII characters
        vector<int> lastIndex(256,-1);
        //string can contain standard ASCII characters (letters, numbers, symbols, spaces).
        //It serves as a default marker indicating that we have not seen this character yet.

        int l = 0,r = 0,maxlen = 0;
        int n =static_cast<int>(s.length());
        while(r < n){
    // If the character was seen inside or after the current window boundary 'l'
            if(lastIndex[s[r]] != -1){
                l = std::max(l,lastIndex[s[r]]+1);// Jump 'l' directly
            }
            lastIndex[s[r]] = r;// Update last seen position
            maxlen = std::max(maxlen,r-l+1);// Calculate current valid window size
            r++;

        }
        return maxlen;
    }
};

/*
->runs in O(N²) time complexity
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
*/