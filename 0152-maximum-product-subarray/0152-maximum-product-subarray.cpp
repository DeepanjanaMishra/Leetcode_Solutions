class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int i, mul=1, m=INT_MIN;
       int n=nums.size();
       for(int i=0;i<n;i++){
        mul=mul*nums[i];
        if(m<mul) m=mul;
        if(mul==0) mul=1;
       }
       mul=1;
       for(int i=n-1;i>=0;i--){
        mul=mul*nums[i];
        if(m<mul) m=mul;
        if(mul==0) mul=1;
       }
       return m;
        }
};