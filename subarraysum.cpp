class Solution {
public:
    long long maximumSumSubarray(int k, vector<int> &arr) {
        int n = arr.size();
        long long windowSum = 0;
        
        
        for(int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
        
        long long maxSum = windowSum;
        
       
        for(int i = k; i < n; i++) {
            windowSum += arr[i];      
            windowSum -= arr[i - k]; 
            maxSum = max(maxSum, windowSum);
        }
        
        return maxSum;
    }
};