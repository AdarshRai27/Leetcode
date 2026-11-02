class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int nom=0;
        int medind=(nums.size()-1)/2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[medind]>nums[i]){
                nom+=(nums[medind]-nums[i]);
            }
            else{
                nom+=nums[i]-nums[medind];
            }
        }
       return(nom);
    }
};