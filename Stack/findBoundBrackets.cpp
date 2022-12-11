#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool findRedunctantBrackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            // ")"
            if (ch == ')')

            {
                bool IsRedundant = true;
                while (st.top() != '(')
                {

                    char top = st.top();
                    if (top == '(' || top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        IsRedundant = false;
                    }
                    st.pop();
                }

                if (IsRedundant == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }

    return false;
}

int main()
{
    return 0;
}