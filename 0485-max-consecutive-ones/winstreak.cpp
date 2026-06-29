/*
Input Example: nums = ["WIN", "LOSS", "WIN", "WIN", "WIN", "LOSS", "WIN", "WIN"]
Expected Output: 3
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    int winstreak(vector<string>& nums){
        int currentstreak=0;
        int wins=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i].length())==3){
                currentstreak++;
                if(currentstreak > wins){
                wins = currentstreak;
                }
            }
            else{
                currentstreak=0;
            }
        }
        return wins;
    }
};

/* we can use other alternaives:-
if(nums[i]=="WIN")//input should be bold same as WIN
if(nums[i][0]=="W")//checks first character
*/

int main(){
    structure solver;

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<string> nums(size);
    cout << "Enter the result: ";
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    int result = solver.winstreak(nums);
    
    cout << "result : " << result << endl;
    
    return 0;
}