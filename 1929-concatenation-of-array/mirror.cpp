/*
Input Example: nums = [1, 2, 3]
Expected Output Vector: [1, 2, 3, 3, 2, 1]
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    vector<int> mirror(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n * 2);
        for(int i=0;i<n;i++){
            ans[i]=nums[i];
            ans[i+n] = nums[(n-1)-i];
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
    for(int i =0;i<size;i++){
        cin >> input[i];
    }
    vector<int> result = solver.mirror(input);

    cout << "Result :[ ";
        for (int num :result){
            cout << num << " ";
        }
        cout << "]" << endl;
        return 0;
    }