#include <bits/stdc++.h>

using namespace std;

const int inf = 1e5;

vector<int> adj[100];
int visited[100];
int level[100];
int node_value[100];

void BFS(int starting_vertex, int total_node, int node)
{
    queue<int>q;

    q.push(starting_vertex);
    visited[starting_vertex] = 1;// visit hoice kina
    level[starting_vertex]=0;// shortest path rakar jonno, source teke

    //cout << starting_vertex<< ' ';

    while(!q.empty()){
        int u = q.front();
        q.pop();

        if(u == node) {
            cout << "Node value of "<< u << " is "<<node_value[u] << endl;
            return;
        }

        for(int v=0;v<adj[u].size();v++){
            int x=adj[u][v];

            if(!visited[x]){
                //cout <<x << ' ';
                visited[x]=1;
                level[x]=level[u]+1;
                q.push(x);
            }
        }
    }
    cout << "Node not found\n";
}

int main()
{
    int vertex = 16, edge = 15;

    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[1].push_back(4);
    adj[4].push_back(1);
    adj[2].push_back(5);
    adj[5].push_back(2);
    adj[5].push_back(6);
    adj[6].push_back(5);
    adj[5].push_back(7);
    adj[7].push_back(5);
    adj[7].push_back(8);
    adj[8].push_back(7);
    adj[7].push_back(9);
    adj[9].push_back(7);
    adj[9].push_back(10);
    adj[10].push_back(9);
    adj[9].push_back(11);
    adj[11].push_back(9);
    adj[9].push_back(12);
    adj[12].push_back(9);
    adj[10].push_back(13);
    adj[13].push_back(10);
    adj[13].push_back(14);
    adj[14].push_back(13);
    adj[14].push_back(15);
    adj[15].push_back(14);
    adj[14].push_back(16);
    adj[16].push_back(14);

    for(int i=1;i<=vertex;i++) {
        visited[i]=0;
        level[i]=inf;
    }

    for(int i = 0; i <= vertex; i++) {
        node_value[i] = i*i;
    }

    int node;
    cout << "Enter Node Number: ";
    cin >> node;

    BFS(1, vertex, node);

    return 0;
}

