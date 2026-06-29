/*
Input Example: nums = [0, 5, 12, 0, 0, 1, 2, 8, 4, 0]
Expected Output: 4
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    int winstreak(vector<int>& nums){
        int currentstreak=0;
        int rainydays=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                currentstreak++;
                if(currentstreak > rainydays){
                rainydays = currentstreak;
                }
            }
            else{
                currentstreak=0;
            }
        }
        return rainydays;
    }
};

int main(){
    structure solver;

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter the measurements: ";
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    int result = solver.winstreak(nums);
    
    cout << "result : " << result << endl;
    
    return 0;
}