#include<iostream>
#include<queue>
#include <string>
#include <ostream>
#include <istream>

using namespace std;

void showq(queue<string> gq)
{ 
    queue<string> q = gq;

    while (q.size()) {
        int i =+ 1;
        if (i == q.size())
        {
            cout << q.front();
        }
        else
        {
            cout << q.front() << " ";
        }
        q.pop();
    }
    cout << '\n';
}

void showfirst(queue<string> gq)
{
    queue<string> q = gq;
    cout << q.front() << '\n';
    cout << q.back();
}


int main()
{
    queue<string> eq;
    int index = 5;
    for (int i = 0; i < 5; i++)
    {
        string ele;
        cin >> ele;
        eq.push(ele);
    }
    showq(eq);
    showfirst(eq);
    
}
