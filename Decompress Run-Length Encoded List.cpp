static auto x = []() {ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL; }();

class Solution {
public:
     int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(auto i=0;i<nums.size();i++)
        {
            int cnt = 0;
            while(nums[i]) {
                cnt++;
                nums[i] /= 10;
            }
            ans += (cnt % 2 == 0);
        }
        return ans;
    }
};