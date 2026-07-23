class Solution {
public:
    int countOnebits(int nums){
        int count=0;
        while(nums!=0){
            count+=nums&1;
            nums>>=1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
       auto lamda =[&](int&a,int&b){
        int count_a = countOnebits(a);
        int count_b= countOnebits(b);

        if(count_a==count_b){
            return a<b;
        }
        return count_a<count_b;
       };
       sort(arr.begin(),arr.end(),lamda);
       return arr;
    }
};