#include <bits/stdc++.h>

using namespace std;

const int inf = 1e5;

vector<int> adj[100];
int node_value[100];


bool IterDS(int src, int des, int lim)
{
    if(src == des) {
        cout << "Node value is " << node_value[src] << endl;
        return true;
    }

    if(lim <= 0) {
        return false;
    }

    for(int i = 0; i < adj[src].size(); i++) {
        int v = adj[src][i];
        if(IterDS(v, des, lim-1)) {
            return true;
        }
    }
    return false;
}

void IDS(int vertex, int edge, int node)
{
    int max_depth;

    cout << "Enter Maximum Depth Limit: ";
    cin >> max_depth;

    for(int i = 0; i <= max_depth; i++) {
        if(IterDS(1, node, i)) {
            return;
        }
    }
    cout << "Node is not found\n";
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

    for(int i = 0; i <= vertex; i++) {
        node_value[i] = i*i;
    }

    int node;
    cout << "Enter Node Number: ";
    cin >> node;

    IDS(vertex, edge, node);

    return 0;
}


