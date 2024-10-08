
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int unique = 1;
        for ( int i = 0; i < nums.size(); i++){
            if (nums[i] != nums[unique-1]){
                nums[unique] = nums[i];
                unique++;
            }
        }
        return unique;
    }
};


