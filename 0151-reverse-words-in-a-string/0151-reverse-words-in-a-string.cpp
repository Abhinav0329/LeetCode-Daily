#include<vector>
#include<sstream>

class Solution {
public:
    string reverseWords(string s) {
        std::stringstream ss(s);
        std::string word;
        std::vector<std::string> words;

        while(ss >> word){
            words.push_back(word);
        }

        string result ="";
        for(int i=static_cast<int>(words.size()-1);i>=0;i--){
            result += words[static_cast<size_t>(i)];
            if(i > 0) result += " ";
        }
        return result;
    }
};