#include<algorithm>// for std::reverse
class Solution {
public:
    void reverseString(vector<char>& s) {
        std::reverse(s.begin(),s.end());
    }
};