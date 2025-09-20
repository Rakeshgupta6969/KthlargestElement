class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

     // using the brute force solution.

    //  sort(nums.begin(),nums.end());

    //  int n = nums.size();

    //  return nums[n-k];


    // now using the optimal approach with the help of the min heap;


    priority_queue<int,vector<int>,greater<int>>pq;

      int n  = nums.size();


      for(int i = 0; i<n; i++){
    
      if(pq.size()<k){
        pq.push(nums[i]);
      }
      else{
        
         if(pq.top()<nums[i]){
            pq.pop();
            pq.push(nums[i]);
         }



      }
         




      }





     return pq.top();

    }
};