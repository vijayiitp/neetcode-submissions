class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        while(n--)
        {
            s.insert(nums[n]);
        }
        if(s.size()==nums.size())
        return false;
        return true;

    }
};