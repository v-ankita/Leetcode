class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int lol;
        vector<int>arr;
        arr.push_back(first);
        int n=encoded.size();
        for(int i=0;i<n;i++)
        {
            lol=encoded[i]^arr[i];
            arr.push_back(lol);
        }
        
        return arr;
    }
};