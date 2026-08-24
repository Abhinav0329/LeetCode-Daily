#include<cctype>
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left < right){
            // Skip non-letter characters on the left
            if(!std::isalpha(s[left])){
                left++;
            }
            // Skip non-letter characters on the right
            else if(!std::isalpha(s[right])){
                right--;
            }
            else{
                std::swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};