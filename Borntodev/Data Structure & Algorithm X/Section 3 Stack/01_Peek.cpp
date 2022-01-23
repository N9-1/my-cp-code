#include<iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> mystack;
    for(int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        mystack.push(n);
    }
    cout << mystack.top();
    return 0;
}