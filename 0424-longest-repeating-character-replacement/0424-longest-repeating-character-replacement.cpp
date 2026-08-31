class Solution {
public:
    int characterReplacement(string s, int k) {
        std::vector<int> count(26, 0);
        int left = 0;
        int maxFreq = 0;
        int maxLength = 0;

        for (int right = 0; right < s.length(); right++) {
            // Track character frequency in current window
            count[s[right] - 'A']++;
            maxFreq = std::max(maxFreq, count[s[right] - 'A']);

            // Current window length minus max frequency gives required replacements
            while ((right - left + 1) - maxFreq > k) {
                count[s[left] - 'A']--;
                left++;
            }

            maxLength = std::max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

/*
int maxLength = 0;
        int n = s.length();

        // Outer loop for the starting point of the substring
        for (int i = 0; i < n; i++) {
            std::vector<int> count(26, 0);
            int maxFreq = 0;

            // Inner loop for the ending point of the substring
            for (int j = i; j < n; j++) {
                count[s[j] - 'A']++;
                maxFreq = std::max(maxFreq, count[s[j] - 'A']);

                int currentLength = j - i + 1;

                // If number of character replacements needed is <= k
                if (currentLength - maxFreq <= k) {
                    maxLength = std::max(maxLength, currentLength);
                } else {
                    // Valid substring condition violated for further extensions from 'i'
                    break; 
                }
            }
        }
        return maxLength;
*/