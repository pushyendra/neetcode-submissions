class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> freq;
    
        for(int kk : nums){
            freq[kk]+=1;
        }

        vector<pair<int,int>> values(freq.begin(),freq.end());


        sort(values.begin(),values.end(),[](const auto& a,const auto& b){
            return a.second > b.second;
        });

        for(int i=0;i<k;i++){
            result.push_back(values[i].first);
        }

        return result;
    }
};
