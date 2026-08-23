#include<string>
#include<cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = static_cast<int>(s.length()-1);
        
        //std::isalnum to filter non-alphanumeric characters
        //std::lower used to conevert all into lowercases
        while(left < right){
            // Skip non-alphanumeric characters from left
            while(left < right && !std::isalnum(s[static_cast<size_t>(left)])){
                left++;
            }
            // Skip non-alphanumeric characters from right
            while(left < right && !std::isalnum(s[static_cast<size_t>(right)])){
                right--;
            }
            // Compare lowercased characters
            if (std::tolower(static_cast<unsigned char>(s[static_cast<size_t>(left)])) != 
                std::tolower(static_cast<unsigned char>(s[static_cast<size_t>(right)]))) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};