class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        long long ans=INT_MAX;
        int n=arr.size();
        long long r1=0;
        for(int i=0;i<n;i++){
            r1+=abs(arr[i]-brr[i]);
        }
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        long long r2=k;
        for(int i=0;i<n;i++){
            r2+=abs(arr[i]-brr[i]);
        }
        return min(r1,r2);
    }
};
