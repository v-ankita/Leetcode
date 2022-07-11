class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int, int>m1;
        unordered_map<int, int>m2;
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
        }
        
        if(m1.size()>=m2.size())
        {
            for(auto x : m1)
            {
                auto iter = m2.find(x.first);
                if(iter != m2.end())
                {
                    for(int i=1;i<=min(x.second,(*iter).second);i++) //+(*iter).second)
                    ans.push_back(x.first);
                }
            }
        }
        
        if(m2.size()>m1.size())
        {
            for(auto x : m2)
            {
                auto iter = m1.find(x.first);
                if(iter != m1.end())
                {
                    for(int i=1;i<=min(x.second,(*iter).second);i++)
                    ans.push_back(x.first);
                }
            }
        }
       
        return ans;
    }
};