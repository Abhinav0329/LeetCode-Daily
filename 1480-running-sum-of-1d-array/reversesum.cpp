/*
Input Example: nums = [1, 2, 3, 4]
Expected Output Vector: [10, 9, 7, 4]
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    vector<int> reverseSum(vector<int>& nums){
        int n = nums.size();
        if (n<=1) return nums;
        for(int i=n-2;i>=0;i--){
            nums[i] += nums[i+1];
        }
        return nums;
    }
};
/*
we can use another method:-
int running_sum = 0;
for (int i = n - 1; i >= 0; i--) {
    running_sum += nums[i];
    ans[i] = running_sum;
*/
int main(){
    structure solver;
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    vector<int> input(size);
    cout << "Enter " << size << " integers separated by spaces or newlines: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> input[i]; 
    }
    vector<int> result = solver.reverseSum(input);
    cout << "Result: [ ";
   for(int num : result) {
        cout << num << " ";
    }
    cout << "]" << endl;
    return 0;
}