class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    //Vector Initialization: To make vector'ans' of size double of previous vector'nums'.
    vector<int> ans(n * 2);
    //to copy half elements in first and rest into second vector 
        for(int i=0;i<n;i++){
            ans[i] = nums[i];//first half
            ans[i+n] = nums[i];//second half
        }
        return ans;
    }
};

/*
we can use another way:-
for(int i=0;i<n*2;i++){
    ans[i]=nums[i%n];
}
*/