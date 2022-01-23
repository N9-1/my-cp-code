#include<iostream>
#include<queue>

using namespace std;

void showq(queue<int> gq)
{ 
    queue<int> q = gq;

    while (q.size()) {
        int i =+ 1;
        if (i == q.size())
        {
            cout << q.front();
        }
        else
        {
            cout << q.front() << ", ";
        }
        q.pop();
    }
}


int main()
{
    queue<int> eq;
    int index = 5;
    for (int i = 0; i < 5; i++)
    {
        int ele;
        cin >> ele;
        eq.push(ele);
    }
    showq(eq);
    
}
