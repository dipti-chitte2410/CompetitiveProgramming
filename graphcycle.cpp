#include<iostream>
#include<vector>
using namespace std;


bool cyclic_until(int u,vector<int>adj[],vector<bool>visited)
{
    bool FLAG=false;
    if(visited[u]==true){
        cout<<"node making cycle:"<<u;
        return true;

    }
    visited[u]=true;

    for(int i=0;i<adj[u].size();i++)
    {

            FLAG=cyclic_until(adj[u][i],adj,visited);
            if(FLAG==true)
            {
                return true;
            }

    }

    return false;

}




bool isCyclic(int V, vector<int>adj[])
{
    bool FLAG=false;
    vector<bool>visited(V,false);

    for(int i=0;i<V;i++)
    {

        visited[i]=true;
        for(int j=0;j<adj[i].size();j++)
        {
            if(visited[adj[i][j]]==false)
            {
                visited[adj[i][j]]=true;
                FLAG=cyclic_until(adj[i][j],adj,visited);
                if(FLAG==true){
                    return true;
                }
            }
        }
        visited[i]=false;
    }
    return false;
}





// { Driver Code Starts.

int main() {

	int t;
	cin >> t;

	while(t--){

	    int v, e;
	    cin >> v >> e;

	    vector<int> adj[v];

	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }

	    cout << isCyclic(v, adj) << endl;

	}

	return 0;
}  // } Driver Code Ends
