/*
nums1 = [1, 2, 3]
nums2 = [4, 5, 6]
Expected Output: [1, 4, 2, 5, 3, 6]
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    vector<int> interleave(vector<int>& num1,vector<int>& num2){
        int n = num1.size();
        vector<int> ans(n * 2);
        for(int i=0;i<n*2;i++){
            if(i%2==0){
                ans[i]=num1[i/2];
            }
            else{
                ans[i]=num2[i/2];
            }
        }
        return ans;
    }
};
/* alternate way
for (int i = 0; i < n; i++) {
            ans[2 * i] = nums1[i];     // Even positions: 0, 2, 4...
            ans[2 * i + 1] = nums2[i]; // Odd positions: 1, 3, 5...
*/

int main(){
    structure solver;

    int size;
    cout << "Enter the size for both arrays: ";
    cin >> size;
    
    vector<int> input1(size);
    cout << "Enter " << size << " elements for the first array: ";
    for (int i = 0; i < size; i++) {
        cin >> input1[i];
    }
    
    vector<int> input2(size);
    cout << "Enter " << size << " elements for the second array: ";
    for (int i = 0; i < size; i++) {
        cin >> input2[i];
    }
    
    vector<int> result = solver.interleave(input1, input2);

    cout << "Result: [ ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << "]" << endl;
    return 0;
}