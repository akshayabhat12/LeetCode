class Solution {
public:
    bool isValid(string s) {
        string stack1;
        char cur;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                stack1.push_back(s[i]);
            else 
            {
                char c=s[i];
                if(stack1.empty())
                return false;

                char cur=stack1.back();
                stack1.pop_back();

                if ((c == ')' && cur != '(') || 
                    (c == '}' && cur != '{') || 
                    (c == ']' && cur != '[')) {
                    return false;
                    }
            }
            
        }
        return stack1.empty();

        
    }
};