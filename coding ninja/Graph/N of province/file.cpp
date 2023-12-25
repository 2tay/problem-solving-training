#include<bits/stdc++.h>
using namespace std;

struct MyComparator{
	bool operator()(int a, int b) const{
		return a > b; 
	}
};

int main()
{
	set<int, MyComparator> s;

	s.insert(1);
	s.insert(3);
	s.insert(2);
	s.insert(5);

	for(int x:s)
	{
		cout << x << " ";
	}

	return 0;
}