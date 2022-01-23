#include <iostream>
using namespace std;


int main()
{
    int a[5] = {};
  	for(int i = 0; i < 4; ++i ) {
    	cin >> a[i];
      	cout << a[i] << ' ';
    }
  	cin >> a[5];
  	cout << a[5];
	return 0;
}

//Tips:  Run for check input format