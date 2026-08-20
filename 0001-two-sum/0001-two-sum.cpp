class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1 ;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] + nums[j]==target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};

/*
Method 2:
using hash map-
#include<unordered_map>
// Map to store: number -> its index
std::unordered_map<int,int> num_to_index;
for(int i=0;i<nums.size();i++){
    int complement = target - nums[i];
// If the complement exists in our map, we found the pair
    if(num_to_index.find(complement) != num_to_index.end()){
        return {num_to_index[compliment],i};
    }
    // Store current number and its index
    num_to_index[nums[i]] = i;
}
return {};// Fallback (problem guarantees exactly one solution)

*/