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
        int e;
        cin >> e;
        myStack.push(e);
    }

    while (!myStack.empty())
    {
        cout << myStack.top() << endl;
        myStack.pop();
    }
}