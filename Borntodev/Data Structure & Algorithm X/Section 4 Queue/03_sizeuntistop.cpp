#include<iostream>
#include<queue>
#include <string>
#include <ostream>
#include <istream>

using namespace std;

void showq(queue<string> gq)
{ 
    queue<string> q = gq;
    int ele = q.size(); 
    int size = 1;
    while (q.size()) {
        int i =+ 1;
        if (i == q.size())
        {
            cout << size << ' ' << q.front() << '\n';
            cout << "total " << ele;
            size = size + 1;
        }
        else
        {
            cout << size << ' ' <<  q.front() << '\n';
            size = size + 1;
        }

        q.pop();
    }
   // cout << '\n';
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
    string ele;
    while (true)
    {
        cin >> ele;
        if (ele != "stop")
        {
            eq.push(ele);
        }
        else
        {
            showq(eq);
            break;
        }
    }
}
