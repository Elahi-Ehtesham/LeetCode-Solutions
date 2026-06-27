class Solution {
public:
    bool isPalindrome(string s) {
         string str;
        for(char c:s)
        {
           if(isalnum(c))
           {
            str+=tolower(c);
           }
        }
        int n=str.size();
        for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
        {
            if(str[i]!=str[j])
            return false;
        }
        return true;
    }
};
