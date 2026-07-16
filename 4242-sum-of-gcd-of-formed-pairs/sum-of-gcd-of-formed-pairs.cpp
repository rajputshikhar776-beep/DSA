class Solution {
public:
    long long gcdSum(vector<int>& nums) {
    int largest =INT_MIN;
       int n = nums.size();
       vector<int>prefixGcd(n,0);
    for(int i=0;i<n;i++){
        int num = nums[i];
        if(nums[i]>largest){
            largest=nums[i];
        }
        prefixGcd[i] = gcd(num,largest);

    }
    sort(prefixGcd.begin(),prefixGcd.end());
    int i=0;
    int j=n-1;
    long long ans =0;
    while(i<j){
      ans += gcd(prefixGcd[i],prefixGcd[j]);
      i++;
      j--;
    }
    return ans;
         
    }
};