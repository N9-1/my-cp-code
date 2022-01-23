#include<iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> myStack;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string choose;
        cin >> choose;
        if(choose == "Push")
        {
            int e;
            cin >> e;
            myStack.push(e);
        }
        else
        {
            myStack.pop();
        }
    }
    
    while(!myStack.empty())
    {
        cout << myStack.top() << ' ';
        myStack.pop();

    }
}