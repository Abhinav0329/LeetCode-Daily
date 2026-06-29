/*
Input Example: nums = [false, true, true, false, true, true, true, true, false]
Expected Output: 4
*/

#include<iostream>
#include<vector>
#include<algorithm> //for max()
using namespace std;

class structure{
    public:
    int winstreak(vector<bool>& nums){
        int currentstreak=0;
        int walkingdays=0;
        for(int i=0;i<nums.size();i++){
            currentstreak = (currentstreak + 1) * nums[i];
            walkingdays = max(walkingdays,currentstreak);
        }
        return walkingdays;
    }
};

int main(){
    structure solver;

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<bool> nums;
    cout << "Enter the measurements (0 for false, 1 for true):\n";
    for(int i = 0; i < size; i++){
        int temp; 
        cin >> temp;
        nums.push_back(temp);
    }

    int result = solver.winstreak(nums);
    cout << "result : " << result << endl;
    return 0;
}