#include <bits/stdc++.h>
using namespace std;

int rotten(vector<vector<int>> grid) {
    int size = grid.size() * grid[0].size();
    vector<vector<int>> adj;
    vector<int> visited(size, 0);
    int rott = -1;
    int pos = 0;

    for(int i=0; i<grid.size(); i++) {
        for(int j=0; j<grid[i].size(); j++) {
            vector<int> helper;
            if(i-1>=0)
                helper.push_back(pos-3);
            if(j-1>=0)
                helper.push_back(pos-1);
            if(j+1<grid[i].size())
                helper.push_back(pos+1);
            if(i+1<grid.size())
                helper.push_back(pos+3);
            
            if(grid[i][j] == 2)
                rott = pos;
            if(grid[i][j] == 0)
                visited[pos] = 1;

            adj.push_back(helper);
            pos++;
        }
    }

    if(rott == -1)
        return -1;

    bool check = false;
    int time = 0;
    queue<int> q;
    q.push(rott);
    visited[rott] = 1;

    while(!q.empty()) {
        int front = q.front();
        cout << front << ": ";

        for(int num: adj[front]) {
            if(visited[num] == 0) {
                check = true;
                visited[num] = 1;
                q.push(num);
                cout << num << " ";
            }
        }

        if(check) {
            check = false;
            time++;
        }

        cout << ", time: " << time << endl;

        q.pop();
    }

    for(int num: visited) {
        if(num != 1) {
            return -1;
        }
    }

    return time;
}

int main() {
    //vector<vector<int>> grid = {{2,1,1},{1,1,0},{0,1,1}};
    //vector<vector<int>> grid ={{1},{2}};
    vector<vector<int>> grid = {{2,1,1},{0,1,1},{1,0,1}};
    int res = rotten(grid);

    cout << res;

    return 0;
}