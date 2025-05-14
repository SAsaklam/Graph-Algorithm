#include<bits/stdc++.h>
using namespace std;

 #define N 100005
vector<int> adj[N];
int level[N];

void dfs(int u,int p){

for(int v: adj[u]){

if( v != p){


level[v] = level[u] + 1;

dfs(v,u);


}




}




}









int main(){

int n;
cin >> n;

for(int i=1;i <= n-1;i++){

int u,v;
cin >> u  >> v;

adj[u].push_back(v);

adj[v].push_back(u);

}

dfs(1,0);

int max_level = 0;
int max_level_node = 1;

for(int i=1;i  <= n;i++){

if(level[i] > max_level) {

max_level = level[i];
max_level_node = i;

}



}

level[max_level_node] = 0;
    dfs(max_level_node, 0);

    // Now calculate diameter
    int diameter = 0;
    for (int i = 1; i <= n; i++) {
        diameter = max(diameter, level[i]);
    }

    cout << diameter << endl;

    return 0;

}
