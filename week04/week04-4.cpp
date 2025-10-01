///week04-4.cpp
///896. Monotonic Array
///只能增加or減少的陣列，不可以又加又減


class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0,down=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]) up=1;
            if(nums[i-1]>nums[i]) down=1;
        }
        if(up==1 && down==1) return false;
        return true;
    }
};
