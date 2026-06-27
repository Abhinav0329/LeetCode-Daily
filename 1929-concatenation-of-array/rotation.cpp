/*
nums = [10, 20, 30, 40, 50], R = 2
Expected Output: [30, 40, 50, 10, 20]
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    vector<int> rotation(vector<int>& nums,int R){
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=nums[(i+R)%n]; // right shift - ans[i] = nums[(i-R+n)%n]
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

    int r;
    cout << "Enter the shift: ";
    cin >> r;

    vector<int> result = solver.rotation(input,r);

    cout << "Result :[ ";
        for (int num :result){
            cout << num << " ";
        }
        cout << "]" << endl;
        return 0;
    }