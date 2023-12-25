#include <bits/stdc++.h>
using namespace std;

int frequencyCount(vector<int> v,int target)
{
	int count = 0;
	bool flag = false;
	for(int v:v)
	{
		if(v == target)
		{
			count++;
			flag = true;
		}
		else{
			if(flag)
				break;
		}
	}
	return count;
}

int main()
{
	vector<int> v = {0,1,1,1,1,2,2,2,3,4,4,5,10};
	int target = 2;

	int count = frequencyCount(v,target);

	cout << "the frequency of " << target << " is : " << count; 

	return 0;
}