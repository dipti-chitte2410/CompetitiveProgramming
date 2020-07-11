#include<iostream>
#include<vector>
#include<queue>
using namespace  std;

void dfs(int u,vector<int> adj[],vector<bool>visited)
{
  int f;
  queue<int>q;
  q.push(u);
  visited[u]=true;
  while(!q.empty())
  {
    f=q.front();
    std::cout << f << '\n';
    q.pop();
    for(int i=0;i<adj[f].size();i++)
    {
      if(visited[adj[f][i]]==false)
      {
        visited[adj[f][i]]=true;
        q.push(adj[f][i]);
      }
    }
  }
}

int main()
{
  int e=10,u,v,n=6,i;


  vector<int>adj[n];
  std::vector<bool> visited(n,false);
  for(i=0;i<e;i++)
  {
    std::cin >> u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for(int j=0;j<n;j++)
  {
    cout<<"index at"<<j;
    for(i=0;i!=adj[j].size();i++)
    {
      cout<<adj[j][i]<<" ";
    }
    std::cout  << '\n';
}

  dfs(0,adj,visited);

}
