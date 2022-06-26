class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> ump;
         for (int i = 0; i < nums.size(); i++)
        ump[nums[i]]++;
        
        // int flag=0;
        for(int i=0;i<ump.size();i++)
        {
            if(ump[nums[i]]>=2)
            {
                return true;
            }
        }
        
        return false;
    }
};