class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = 0;
        vector<bool> ans;
        for(int i = 0; i < candies.size(); i++){
            max_candies = *max_element(candies.begin(),candies.end());
        }
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max_candies){
                ans.push_back(true);
            }
            else
                ans.push_back(false);
        }
        return ans;
    }
};
