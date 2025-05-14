#include<bits/stdc++.h>
using namespace std;
int main(){

int n,m;
cin >> n >> m;

vector<int >adj[n+1];

for(int i=0;i<m;i++){

    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);



}

int src = 1;
queue<int> q;

int level[n+1];

int visited[n+1] = {0};

level[src] = 0;

q.push(src);

 visited[src] = {1};


while(1){

if(q.empty()) break;
int u = q.front();
q.pop();

for(int v: adj[u]){

   if(visited[v]) continue;
   q.push(v);
   level[v] = level[u+1];
visited[v] = 1;
    }



}

for(int i=1;i <= n;i++){

    cout << i << "  ->  "  << level[i] << endl;

}




}
