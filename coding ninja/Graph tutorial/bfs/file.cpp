#include <bits/stdc++.h>
using namespace std;

int main() {

	vector< vector<int> > adjacencyList = {
		{},{2,6},{1,3,4},{2},{2,5},{4,8},{1,7,9},{6,8},{6},{7,5}
	};


	vector<int> visited(adjacencyList.size(), 0);
	queue<int> q;
	vector<int> bfs;

	q.push(1);
	visited[1] = 1;

	while(!q.empty()) 
	{
		int front = q.front();

		bfs.push_back(front);

		for(int adj:adjacencyList[front])
		{
			if(!visited[adj])
			{
				q.push(adj);
				visited[adj] = 1;
			}
		}	

		q.pop();
	}

	for(int num:bfs)
	{
		cout << num << " ";
	}

	return 0;
}