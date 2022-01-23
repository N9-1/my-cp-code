#include<iostream>
#include <stack>
#include <list>
#include<string>  

using namespace std;

/*
string ShortenString(int str1)
{

    stack<int> st;

    int i = 0;

    while (i < str1.length())
    {
        // Check if stack is empty or
        // top != current
        if (st.empty() || str1[i] != st.top())
        {
            st.push(str1[i]);
            i++;
        }

        else
        {
            st.pop();
            i++;
        }
    }

    if (st.empty())
    {
        return("Empty");
    }
    // if stack is not empty
    else
    {
        string space = " ";
        string short_string = "";
        while (!st.empty())
        {
            // int to string
            string result;
            result = to_string(str1.top());
            
            if (st.top() == str1[str1.length()])
            {
                short_string = result + short_string;
                st.pop();
            }
            else
            {
                short_string = result + space + short_string;
                st.pop();
            }
            
            
        }
        return (short_string);
    }

    
}
*/

int main()
{

    int index;
    cin >> index;
    int ele;
    // empty ary to keep records
    int str1[] = {};
    for (int i = 0; i < index; i++)
    {
        cin >> ele;
        str1[i] = ele;
        cout << i << ">>>>" << str1[i] << endl;

    }
    

    //cout << ShortenString(str1);

    return 0;
}
