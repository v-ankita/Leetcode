int klargest(map<int, int>m, int k){
    int largest, freq=0;
    // if (m.size()==1)
    // {
    //     largest=(m->first);
    //         break;
    // }
    auto i=m.end();
    do
    {
        freq+= (i->second);
        if(freq>=k)
        {
            largest=(i->first);
            break;
        }
    i--;
    }while(true);
    return largest;
}

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n= nums.size();
        map<int, int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]+=1;
        }
        return klargest(mp, k);
};
};