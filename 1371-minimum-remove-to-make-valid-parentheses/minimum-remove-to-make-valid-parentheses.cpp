class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>st;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i] == ')'){
    if(!st.empty() && st.top().first == '('){
        st.pop();         
    }
    else{
        st.push({')', i}); 
    }
}
else if(s[i] == '('){
    st.push({'(', i});
}
        } 
     vector<int>index(n,0);
     while(!st.empty()){
        index[st.top().second]=1;
        st.pop();
     }  
     string ans="";
     for(int i=0;i<n;i++){
        if(s[i]=='('||s[i]==')'){
            if(index[i]==1){
               continue;
            }
        }
       ans.push_back(s[i]);
     }
     return ans;  
    }
};