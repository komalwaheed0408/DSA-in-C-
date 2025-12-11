class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0; i <nums.size(); i++){
            int a = nums[i];
            for(int j = i+1; j < nums.size(); j++){
                if(a == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};