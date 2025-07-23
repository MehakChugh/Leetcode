class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> ans(2);
        // int n = nums.size();

        // for (int i=0; i<n; i++){
        //     for (int j=i+1; j<n; j++){
        //         if (nums[i] + nums[j] == target){
        //             ans[0] = i;
        //             ans[1] = j;
        //             break; 
        //         }
        //     }
        // }
        // return ans;
        //TC = O(N2)
        
//         int n = nums.size();
//         unordered_map<int, int> m;
//         vector<int> ans;

//         for (int i=0; i<n; i++){
//             int first = nums[i];
//             int sec = target - first;

//             if (m.find(sec) != m.end()){
//                 ans.push_back(i);
//                 ans.push_back(m[sec]);
//                 break;
//             }
//             m[first] = i;
//         }
//         return ans;
//     }
// };


    unordered_map<int, int> map; // value -> index

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }

        map[nums[i]] = i;
    }

    return {};
}
    };

