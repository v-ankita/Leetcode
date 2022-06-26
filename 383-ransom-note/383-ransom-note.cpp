class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        
    // unordered_map<int, int> mpr;
    unordered_map<int, int> mpm;

    // for (int i = 0; i < ransomNote.size(); i++)
    //     mpr[ransomNote[i]]++;
    for (int i = 0; i < magazine.size(); i++)
        mpm[magazine[i]]++;
        
    for(int i=0;i<ransomNote.size();i++)
    {
        // cout<<mpm[ransomNote[i]]<<endl;
        if(mpm[ransomNote[i]] >= 1)
            mpm[ransomNote[i]]--;
        else
            return false;
    }
    
    return true;
        
    }
};