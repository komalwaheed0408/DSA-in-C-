class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //nums[0] + nums[1] = target;
        for(int i = 0; i <nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){ 
          if (nums[i] + nums[j] == target)
          { 
            int first = i;
            int second = j;
            return{i, j};
          }
            }

        }
           return {};
    }
};