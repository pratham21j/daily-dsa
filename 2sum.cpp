// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {

//         unordered_map<int, int> mp;

//         for(int i = 0; i < numbers.size(); i++) {

//             int needed = target - numbers[i];

//             if(mp.find(needed) != mp.end()) {
//                 return {mp[needed], i};
//             }

//             mp[numbers[i]] = i;
//         }

//         return {};
//     }
// };
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for( int i=0; i<nums.size();i++){
//             for(int j=i+1;j<nums.size();(j++)){
//                 int sum = nums[i]+nums[j];
//                 if(sum==target)
//                 return{i,j};
//             }
//         }
//         return {};

//     }

// };