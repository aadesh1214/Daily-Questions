class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.length(),ans=0;
        map<int,int>mp;
        while(i<n){
            if (mp[s[i]]==1){
                mp[s[j]]-=1;
                j+=1;
        }
            else{
                ans=max(ans,i-j+1);
                mp[s[i]]+=1;
                i+=1;
            }
        }
        return ans;
    }
};
