class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        // int num= s.length();
        sort(s.begin(),s.end());
        // char a=(int)*s.begin();
        // cout<<a<<endl;
        // if(a=='0')
        // {
        //     return false;
        //     exit(0);
        // }
        int flag=0;
        do
        {  
            n=stoi(s);
            if(n && (!(n&(n-1))))
            {   char a=(int)*s.begin();
                cout<<a<<endl;
                if(a=='0')
                {
                    return false;
                    exit(0);
                }
                    flag=1;
                    return n;
            }  
            
        }while(next_permutation(s.begin(),s.end()));
        
        // cout<<n;
        // if(a==0)
        //     return false;
        if(flag==1)
            return true;
        else
            return false;
        
    }
};


