#include<algorithm>
class Solution {
public:
    string reverseWords(string s) {
        int n = static_cast<int>(s.length());
        int start = 0;

        for(int end=0;end<=n;end++){
            if(end == n || s[static_cast<size_t>(end)] == ' '){
                std::reverse(s.begin()+start,s.begin()+end);
                start = end + 1;
            }
        }
        return s;
    }
};