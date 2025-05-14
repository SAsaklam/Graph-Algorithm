#include<bits/stdc++.h>
using namespace std;
#define N 100005



vector<int > adj[N];
int visited[N];

void dfs(int u){
cout << "Visited Note " << u << endl;
visited[u] = 1;
for(int v: adj[u]){
if(visited[v]) continue;
dfs(v);
cout << "Returning to Node  " << u << endl;


}



}

int main(){

int n,m;
cin >> n >> m;
for(int i=0;i<m;i++){
int u,v;
cin >> u >> v;
adj[u].push_back(v);
adj[v].push_back(u);


}

dfs(1);

}
