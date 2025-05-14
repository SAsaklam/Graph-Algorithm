#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }




    vector<int > visited(n+1,0);

    vector<int> distance(n+1,0);
 vector<int> prev(n+1,0);
    queue<int> q;

   int src, dis;
   cin >> src >> dis;

   q.push(src);
   visited[src]  = 1;
   distance[src] = 0;


    while( !q.empty()){
    int u = q.front();
    q.pop();
      for(int v: adj[u]){

                if(visited[v]) continue;

                visited[v] =1;
                q.push(v);
                distance[v] = distance[u] +1;
                prev[v] =  u;


            }






    }


int x = dis;

while(1){
cout << x << "-" ;


if( x ==  src){
break;
}
x = prev[x];

}




cout << endl;

        }



