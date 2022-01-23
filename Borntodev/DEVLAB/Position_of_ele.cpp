#include <bits/stdc++.h>
using namespace std;


void getIndex(vector<int> v, int K)
{
	auto it = find(v.begin(), v.end(), K);

	if (it != v.end())
	{
	
		// calculating the index
		// of K
		int index = it - v.begin();
		cout << index << endl;
	}
	else {
		cout << "-1" << endl;
	}
}


int main()
{
	// Vector
	int index;
	cin >> index;
    int myarray [index];
	for (int i = 0; i < index; i++)
	{
		/* code */
		cin >> myarray[i];
	}
	
	vector<int> v;
    v.insert (v.begin(), myarray, myarray+index);
	int K;
	cin >> K;
	getIndex(v, K);
	return 0;
}
