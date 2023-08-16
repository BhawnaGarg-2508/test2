class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        unordered_map <int, int> mp;

        for(int i = 0; i< nums.size(); i++){
            if(mp.count(nums[i]) == 0){
                mp[nums[i]] = 1;
            }

            else{
                mp[nums[i]] +=1;
            }
        }

        int i = 0;
        int j = 0;
        int count = 0;
        while(i < nums.size()){
            if(mp[nums[i]] == 0){
                i++;
            }
            else if(mp[nums[i]] <= 2){
                nums[j] = nums[i];
                mp[nums[i]] -= 1;
                i++;
                count += 1;
                j++;
            }

            else{
                mp[nums[i]] = 2;

            }

        }

        return count;
        
    }
};
