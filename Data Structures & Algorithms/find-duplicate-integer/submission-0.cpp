class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> frq(nums.size()+1,0);
        for ( int i=0;i<nums.size();i++){
            if(frq[nums[i]]>=1) return nums[i];
            frq[nums[i]]++; 
        }
        return 0;
    }
};
