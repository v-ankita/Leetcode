bool compare(pair<int,int>a, pair<int,int>b)
{
    return a.second > b.second;
}

vector<int>kfrequent(map<int, int>mp, int k){
   vector<pair<int, int>> freq_arr(mp.begin(),mp.end());
    sort(freq_arr.begin(),freq_arr.end(),compare);
    
    vector<int>ans;
    for(int i=0;i<k;i++)
    {
        ans.push_back(freq_arr[i].first);
    }
    
    return ans;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int, int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]+=1;
        }
        return kfrequent(mp, k);
    }
};