class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = static_cast<int>(code.size());
        vector<int> arr(n,0);
        if(k == 0) {
            return arr;
        }
        int l = 1,r = k;
        if(k < 0){
            k = abs(k);
            l = n-k;
            r = n-1;
        }
        int windowsum = 0;
        for(int i=l;i<=r;i++){
            windowsum += code[i % n];
        }
        for(int i=0;i<n;i++){
            arr[i] = windowsum;
            windowsum -= code[l % n];
            l++;
            r++;
            windowsum += code[r % n];
        }
        return arr;
    }
};

/*
->If N and K constraints are very small (N≤100)
for (int i = 0; i < n; i++) {
        int sum = 0;
        if (k > 0) {
            for (int j = 1; j <= k; j++) {
                sum += code[(i + j) % n];
            }
        } else {
            for (int j = 1; j <= -k; j++) {
                sum += code[(i - j + n) % n]; // Adding 'n' avoids negative modulo in C++
            }
        }
        result[i] = sum;
    }

    return result;
*/