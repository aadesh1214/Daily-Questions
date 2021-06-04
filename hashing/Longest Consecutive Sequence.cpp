class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
          if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        int c=0,max=0;
        unordered_map<int,int>m;
        for(auto i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        nums.clear();
        for(auto i=m.begin();i!=m.end();i++){
            nums.push_back(i->first);
        }
        sort(nums.begin(),nums.end());
        
        for(auto i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]-1){
                c++;
                if(c>max){
                    max=c;
                }
            }
            else{
                c=0;
            }
                
            
        }
        
        return max+1;
    }
};
