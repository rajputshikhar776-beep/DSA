class Solution {
public:
    int minBitFlips(int start, int goal) {
       int flips=0;
    while(start!=0||goal!=0){
        if((start&1)==1){
            if((goal&1)==0){
                flips++;
            }
        }
        else{
            if((goal&1)==1){
                flips++;
            }
        }
        start>>=1;
        goal>>=1;
    }  
    return flips;
    }
};