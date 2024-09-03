#include <bits/stdc++.h>
using namespace std;

string spaceRemove(string infix)
{
    string filter;
    for (int i = 0; i < infix.size(); i++) // Use < instead of <= to avoid out-of-bound access
    {
        char symbol = infix[i];
        if (symbol != 32)
        {
            filter += symbol; // Append the current non-space character to filter
        }
    }
    cout << filter;
    return filter;
}

int priority(char symbol)
{
    if(symbol == '+' || symbol == '-')
    {
        return 1;
    }
    else if(symbol == '*' || symbol == '/')
    {
        return 3;
    }
    else if(symbol == '^')
    {
        return 5;
    }
    else
    {
        return -1;
    }
}

string infToPost(string infix, string postfix)
{
    stack<char> S;
    for(int i = 0; i <= infix.size(); i++)
    {
        char symbol = infix[i];
        if(symbol >= '0' && symbol <= '9') // Alphabet
        {
            postfix += symbol;
        }
        else if(symbol == '(') // Open Parantheses
        {
            S.push(symbol);
        }
        else if(symbol == ')') // Closed Parantheses
        {
            while(!S.empty() && (S.top() != '('))
            {
                postfix += S.top();
                S.pop();
            }
            if(!S.empty())
            {
                S.pop();
            }
        }
        else // Operator
        {
            while (!S.empty() && (priority(S.top()) >= priority(symbol)))
            {
                postfix += S.top();
                S.pop();
            }
            S.push(symbol);
        }
    }
    while(!S.empty())
    {
        postfix += S.top();
        S.pop();
    }
    return postfix;
}

void postfixEvaluation(string postfix)
{
    stack<int> Sum;
    for(int i = 0; i <= postfix.size(); i++)
    {
        char exp = postfix[i];

        if(exp >= '0' && exp <= '9') // Alphabet
        {

            Sum.push(exp - '0');
        }
        else if(exp == '+') // Addition
        {

            int a = Sum.top();

            Sum.pop();
            int b = Sum.top();

            Sum.pop();
            Sum.push((a + b));
        }
        else if(exp == '-') // Subtraction
        {
            // cout << exp << " " << Sum.top();
            int a = Sum.top();
            // cout << a << endl;
            Sum.pop();
            int b = Sum.top();
            // cout << b << endl;
            Sum.pop();
            Sum.push((b - a));
        }
        else if(exp == '*') // Multiplication
        {
            int a = Sum.top();
            Sum.pop();
            int b = Sum.top();
            Sum.pop();
            Sum.push((a * b));
        }
        else if(exp == '/') // Division
        {
            int a = Sum.top();
            Sum.pop();
            int b = Sum.top();
            Sum.pop();
            Sum.push((b / a));
        }
        else if (exp == '^') // Exponent
        {
            int a = Sum.top();
            Sum.pop();
            int b = Sum.top();
            Sum.pop();
            int c = pow(a, b);
            Sum.push(c);
        }
    }

    cout << Sum.top();
}

int  main()
{
    string infix, postfix;
    cout << "Enter infix expression: ";
    cin >> infix;
    infix = spaceRemove(infix);
    postfix = infToPost(infix, postfix);
    cout << postfix << endl;
    postfixEvaluation(postfix);
}
