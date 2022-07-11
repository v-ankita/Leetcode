class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
        int i, j;
        if(m==0)
        {   for(i=0;i<nums1.size();i++)
            {
                nums1[i]=nums2[i];
            }
         return;
        }
        i=m-1;
        j=n-1;
        int k=m+n-1;
        // cout<<nums1[k];
        while(k>=0)
        {
            if(i<0)
            {
                nums1[k]=nums2[j];
                j--;
            }
            else if(j<0)
            {
                nums1[k]=nums1[i];
                i--;
            }
            else if(nums1[i]>=nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
            }
            k--;
            cout<<k;
        }
        
    }
};