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
            cout << myStack.top() << ' ';
            myStack.pop();
        }
    }

}