// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int low = 1;
//         for(int high=1; high<nums.size();high++){
//             if(nums[high]!=nums[high-1]){
//                 nums[low]=nums[high];
//                 low++;}
                
//         }
//         return low;
//     }

// };