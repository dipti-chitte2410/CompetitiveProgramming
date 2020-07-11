#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

void addbreadth(vector<int>adj[],int u,int v){
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void dfsuntil(int u,vector<int>adj[],vector<bool>&visited){
  visited[u]=true;
  cout<<u<<" ";
  int i;
  for(i=0;i<adj[i].size();i++)
  {
    if(visited[adj[u][i]]==false)
    {
      dfsuntil(adj[u][i],adj,visited);
    }
  }

}

void dfs(vector<int>adj[],int v){
  vector<bool>visited(v,false);
  int i;
  for(i=0;i<v;i++)
  {
    if(visited[i]==false)
    {
      dfsuntil(i,adj,visited);
    }
  }
}


int main()
{
  int v=5;
  vector<int>adj[v];
  addbreadth(adj,0,1);
  addbreadth(adj,0,4);

  addbreadth(adj,1,4);
  addbreadth(adj,1,2);
  addbreadth(adj,1,3);

  addbreadth(adj,2,3);

  addbreadth(adj,3,4);


  int i=0,j;

  vector<int>::iterator itr;
  for(i=0;i<v;i++)
  {
    cout<<"Element at index"<<i<<":";
    for(auto j=adj[i].begin();j!=adj[i].end();j++)
    {
      cout << *j<< ' ';
    }
    std::cout  << '\n';
  }

  dfs(adj,v);


}
