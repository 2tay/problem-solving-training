#include <bits/stdc++.h>
using namespace std;

bool AllVisited(vector<int> visited) {
    for(int num : visited) {
        if(num != 1) {
            return false;
        }
    }

    return true;
}

void pushToAdjacency(pair<int,int> index, int rows, int cols, vector<pair<int, int>> &temp) {
    vector<pair<int, int>> ps = {{index.first-1, index.second}, {index.first+1, index.second}, {index.first, index.second-1}, {index.first, index.second+1}};
    for(auto couple : ps) {
        if(couple.first>=0 && couple.first<rows && couple.second>=0 && couple.second<cols) {
            temp.push_back(couple);
        }
    }
}

auto setAdjacency(vector<vector<int>> grid, vector<vector<pair<int, int>>> adj) {
    int rows = grid.size();
    
    for(int i=0; i<rows; i++) {
        int cols = grid[i].size();
        for(int j=0; j<cols; j++) {
            vector<pair<int, int>> temp;
            temp.push_back({i, j});
            pushToAdjacency({i,j}, rows, cols, temp);
            adj.push_back(temp);
        }
    }

    return adj;
}

 int orangesRotting(vector<vector<int>>& grid) {
    vector<vector<pair<int, int>>> adj;
    adj = setAdjacency(grid, adj);
    int rows = grid.size();
    int cols = grid[0].size();

    int count = 0;
    vector<pair<int, int>> rotten;
    vector<int> visited(rows*cols, 0);
    
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(grid[i][j] == 2) {
                rotten.push_back({i, j});
                visited[i*rows + j] = 1;
            }
            if(grid[i][j] == 0) {
                visited[i*rows + j] = 1;
            }
        }
    }

    if(rotten.empty()) {
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                if(grid[i][j] == 1) {
                    return -1;
                }
            }
        }

        return 0;
    }

    queue<vector<pair<int, int>>> q;
    q.push(rotten);

    while(!q.empty()) {
        auto front = q.front();
        vector<pair<int, int>> temp;

        for(auto current : front) {
            int index = current.first*rows + current.second;
            for(int i=1; i<adj[index].size(); i++) {
                auto adjacent = adj[index][i];
                int ps = adjacent.first * rows + adjacent.second;
                if(visited[ps] == 0) {
                    temp.push_back(adjacent);
                    visited[ps] = 1;
                }
            }
        }

        if (!temp.empty()) {
        q.push(temp);  
        count++;        
    }

        q.pop();
    }

    if(!AllVisited(visited)) {
        return -1;
    }

    return count;
} 

int main() {
    vector<vector<int>> grid = /*{{2,1,1}, {1,1,2}, {0,1,1}};*/ /*{{1}, {2}};*/ {{2,1,1}, {1,1,0}, {0,1,1}};
    int res = orangesRotting(grid);
    cout << res;
    return 0;
}