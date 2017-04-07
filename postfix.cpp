#include<iostream>
#include<stack>
using namespace std ;
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}
int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int infixToPostfix(char* exp)
{
    int i, k;
    stack<char> st ;
    // Create a stack of capacity equal to expression size
    for (i = 0, k = -1; exp[i]; ++i)
    {
         // If the scanned character is an operand, add it to output.
        if (isOperand(exp[i]))
            exp[++k] = exp[i];

        // If the scanned character is an ‘(‘, push it to the stack.
        else if (exp[i] == '(')
            st.push(exp[i]);

        //  If the scanned character is an ‘)’, pop and output from the stack
        // until an ‘(‘ is encountered.
        else if (exp[i] == ')')
        {
            while (st.empty()==0 && st.top() != '(')
            {
                exp[++k] = st.top();
                st.pop();
            }
            if (st.empty()==0 && st.top() != '(')
                return -1; // invalid expression
            else
                st.pop();
        }
        else // an operator is encountered
        {
            while (st.empty()==0 && Prec(exp[i]) <= Prec(st.top()))
            {
                exp[++k] = st.top();
                st.pop();
            }
            st.push(exp[i]);
        }

    }

    // pop all the operators from the stack
    while (st.empty()==0)
        {
            exp[++k] = st.top();
            st.pop();
        }
    exp[++k] = '\0';
    cout << exp;
}
int main ()
{
    int test ;
    cin >> test ;
     char exp[400];
     for(int i=0;i<test;i++)
     {
        cin >> exp ;
        infixToPostfix(exp);
     }
    return 0;
}
