class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        vector <pair<int, int>> v;
        for(int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size()-1; i++) {
            for(int j = i+1; j < v.size(); j++) {
                if(v[i].first + v[j].first == target) {
                    ans.push_back(v[i].second);
                    ans.push_back(v[j].second);
                    break;
                }
            }
        }
        return ans;
    }
};

// Easy code with more runtime
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        for(int i = 0; i < nums.size()-1; i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};