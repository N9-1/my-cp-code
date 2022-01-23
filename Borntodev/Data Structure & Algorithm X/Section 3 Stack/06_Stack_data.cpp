#include<iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> myStack;
    for(int i = 0; i < 5; i++)
    {
        int e;
        cin >> e;
        myStack.push(e);
    }

    int pop;
    cin >> pop;
    for(int i = 0; i < pop; i++)
    {
        myStack.pop();
    }

    stack<int> myStack_re;
    int item;
    
    while(!myStack.empty())
    {
        item = myStack.top();
        myStack.pop();
        myStack_re.push(item);
    }

    while(!myStack_re.empty())
    {
        cout << myStack_re.top() << endl;
        myStack_re.pop();
    }
}