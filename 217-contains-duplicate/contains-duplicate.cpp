class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int, int> hash;
        for(int i=0; i<n; i++){
            hash[nums[i]]++;
        }
        for(auto& it: hash){
            if(it.second>=2){
                return true;
            }
        }
        return false;
    }
};