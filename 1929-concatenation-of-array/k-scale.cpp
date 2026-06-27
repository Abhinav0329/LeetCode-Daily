/*
Input Example: nums = [5, 6], k = 4
Expected Output Vector: [5, 6, 5, 6, 5, 6, 5, 6]
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    vector<int> scale(vector<int>& nums,int k){
        int n=nums.size();
        vector<int> ans(n * k);
        for(int i=0;i<n*k;i++){
            ans[i]=nums[i%n];
        }
        return ans;
    }
};

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
    vector<int> result = solver.scale(input, k);
    cout << "Result :[ ";
    for (int num : result){
        cout << num << " ";
    }
    cout << "]" << endl;
    
    return 0;
}