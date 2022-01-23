#include<iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> myStack;
    stack<int> myStack2;
    int n, n2, order;
    cin >> n >> n2 >> order;
    for(int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        myStack.push(e);
    }

    for(int i = 0; i < n2; i++)
    {
        int e;
        cin >> e;
        myStack2.push(e);
    }

    stack<int> result;
    int j = 0;
    for(int i = 0; i < order; i++)
    {
        string choose;
        cin >> choose;
        if(choose == "Pop")
        {
            if(j == 0)
            {
                myStack2.push(myStack.top());
              //  cout << "Top2 j0 =" <<myStack.top()<< endl;
                myStack.pop();
               // cout << "Top1 j0 =" <<myStack.top() << endl;
            }
            else
            {
                myStack.push(myStack2.top());
                myStack2.pop();
            }
        }
        else
        {
            if(j == 0)
            {
                cout << myStack.top() << endl;            
                j++;
            }
            else
            {
                cout << myStack2.top() << endl;
                j--;
            }
        }
        
    }


}