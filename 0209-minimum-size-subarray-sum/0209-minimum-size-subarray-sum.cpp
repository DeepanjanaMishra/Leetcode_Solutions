class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(), sum=0, ws=n+1;
        for(int i=0,j=0;j<n || sum>=target;){
            if(sum<target){
                sum=sum+nums[j];
                j++;
            }
            else{
                ws=min(ws,j-i);
                sum=sum-nums[i];
                i++;
            }
        }
        if(ws==n+1) return 0;
        return ws;
    }
    
};