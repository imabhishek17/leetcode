class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        
        for(int i=0;i<nums.size();i=i+2) 
        {
            int a=nums[i];
            int b=nums[i+1];
            for(int j=0;j<a;++j)
                res.push_back(b);
        }
        return res;
    }
};