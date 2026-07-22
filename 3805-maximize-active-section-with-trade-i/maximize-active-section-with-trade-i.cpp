class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones = 0;
        for(char c : s)
            if(c == '1') ones++;

        s = "1" + s + "1";

        vector<int> len;
        vector<char> ch;

        int cnt = 1;
        for(int i = 1; i < s.size(); i++) {
            if(s[i] == s[i - 1]) {
                cnt++;
            } else {
                len.push_back(cnt);
                ch.push_back(s[i - 1]);
                cnt = 1;
            }
        }

        len.push_back(cnt);
        ch.push_back(s.back());

        int ans = ones;

        for(int i = 1; i < len.size() - 1; i++) {
            if(ch[i] == '1' && ch[i - 1] == '0' && ch[i + 1] == '0') {
                ans = max(ans, ones + len[i - 1] + len[i + 1]);
            }
        }

        return ans;
    }
};