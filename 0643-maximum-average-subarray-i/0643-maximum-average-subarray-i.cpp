class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,m,n=nums.size();
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        m=sum;
        for(int j=k;j<n;j++){
            sum=sum+nums[j]-nums[j-k];
            if(m<sum) m=sum;
        }
        return (double)m/k;
    }
};