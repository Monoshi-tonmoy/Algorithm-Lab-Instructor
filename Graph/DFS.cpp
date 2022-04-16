#include <bits/stdc++.h>
using namespace std;

vector <int> adj[6];
int visited[6];


void dfs(int at){
    if(visited[at])
        return;

    visited[at]=1;
    cout<<at<<" ";

    for(int i=0;i<adj[at].size();i++){
        dfs(adj[at][i]);
    }
}

int main()
{
    adj[1].push_back(2);
    adj[1].push_back(5);
    adj[2].push_back(3);
    adj[2].push_back(5);
    adj[2].push_back(1);
    adj[5].push_back(1);
    adj[5].push_back(2);
    adj[5].push_back(4);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[4].push_back(5);
    adj[4].push_back(6);
    cout<<"Printing graph using DFS:"<<endl;
    dfs(1);
}


