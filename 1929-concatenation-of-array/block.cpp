/*
nums = [1, 2], k = 3
Expected Output: [1, 2, 2, 4, 3, 6]
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    vector<int> multiply(vector<int>& nums,int k){
        int n=nums.size();
        vector<int> ans(n * k);
        int globalIndex = 0;
        
        for (int b = 1; b <= k; b++) {
            for (int i = 0; i < n; i++) {
                ans[globalIndex] = nums[i] * b;
                globalIndex++;
            }
        }                               
        return ans;
    }
};

/*
for(int i=0;i<n*k;i++){
int baseElement = nums[i % n];
int multiplier = (i / n) + 1;
ans[i] = baseElement * multiplier;
*/

int main(){
    structure solver;

int size;
    cout << "Enter the size: ";
    cin >> size;
    
    vector<int> input(size);
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        cin >> input[i];
    }
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    vector<int> result = solver.multiply(input, k);
    cout << "Result :[ ";
    for (int num : result){
        cout << num << " ";
    }
    cout << "]" << endl;
    
    return 0;
}