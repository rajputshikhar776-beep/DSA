class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
       int n = pushed.size();
       int m = popped.size();
       int i=0;
       stack<int>st;
       
       int j=1;
       for(int x : pushed){
          st.push(x);

    while(!st.empty() && st.top()==popped[i]){
        st.pop();
        i++;
    }
}
       if(st.empty()){
           return true;
       }
       return false;
    }
};