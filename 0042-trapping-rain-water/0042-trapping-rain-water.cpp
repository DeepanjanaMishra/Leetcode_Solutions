class Solution {
public:
    int trap(vector<int>& height) {
        int i;
        int n=height.size();
        vector<int> left(n,0);
        vector<int>right(n,0);
        int amt=0;
        left[0]=height[0];
        right[n-1]=height[n-1];
        for(i=1;i<n;i++){
            left[i]=max(left[i-1],height[i]);
        }
        for(i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        for(i=0;i<n;i++){
            amt=amt+min(left[i],right[i])-height[i];
        }
        return amt;
    }
};