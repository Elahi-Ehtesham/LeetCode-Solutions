class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int >stk;

        for(string c:tokens)
        {
           if(c!="+" && c!="-" && c!="*" && c!="/")
            {
                stk.push(stoi(c));
            }
            else 
            {
                int a=stk.top();
                stk.pop();    
                int b=stk.top();
                stk.pop();
                if(c=="+")
                    stk.push(a+b);
                else if(c=="-")
                    stk.push(b-a);
                else if(c=="*")
                    stk.push(a*b);
                else 
                    stk.push(b/a);
            }
        }
        return stk.top();
    }
};
