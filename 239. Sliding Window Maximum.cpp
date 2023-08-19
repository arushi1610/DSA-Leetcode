class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> ans;
        priority_queue<int> pq;
        map<int, int> mpp;
        for(int i = 0 ; i < k-1 ;i++){
            pq.push(nums[i]);
            mpp[nums[i]]++;
        }
        for(int i = k-1, j = 0; i < nums.size() ;i++){
            mpp[nums[i]]++;

            pq.push(nums[i]);

            while(mpp[pq.top()] ==0){
                pq.pop();
            }
            mpp[nums[j]]--;

            ans.push_back(pq.top());
            j++;
            
        }
        return ans;




    }
};