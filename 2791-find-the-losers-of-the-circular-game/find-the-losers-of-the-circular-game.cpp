class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
         vector<int> ans;
        map<int,int> mp;
        int i=1,j=k;
       
        
        while(mp.find(i)==mp.end())
        {
            mp[i]++;
            i = (i+k)%n;
            if(i == 0)
            {
                i = n;
            }
            
            k=k+j;
            
        }
        
        for(int i=1;i<=n;i++)
        {
            if(mp.find(i) == mp.end())
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};