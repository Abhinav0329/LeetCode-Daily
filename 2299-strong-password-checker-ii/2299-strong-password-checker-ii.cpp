class Solution {
public:
    bool strongPasswordCheckerII(string password) {
if (password.length() < 8) return false;

        bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;
        string specialChars = "!@#$%^&*()-+";

        for (int i = 0; i < password.length(); i++) {
            // Check adjacent duplicate condition
            if (i > 0 && password[i] == password[i - 1]) return false;

            char c = password[i];
            if (islower(c)) hasLower = true;
            else if (isupper(c)) hasUpper = true;
            else if (isdigit(c)) hasDigit = true;
            else if (specialChars.find(c) != string::npos) hasSpecial = true;
        }
        return hasLower && hasUpper && hasDigit && hasSpecial;
    }
};