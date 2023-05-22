class Solution
{

private:
    int time = 1;

private:
    void dfs(int node, int parent, vector<int> &vis, int low[], int tim[],
             vector<int> adj[], vector<vector<int>> &bridges)
    {
        vis[node] = 1;
        tim[node] = low[node] = time;
        time++;

        for (auto it : adj[node])
        {
            if (it == parent)
            {
                continue;
            }

            if (!vis[it])
            {
                dfs(it, node, vis, low, tim, adj, bridges);

                // Update low to lowest of its adjacent except parent
                low[node] = min(low[node], low[it]);

                // This means that if we remove this node we will not able to reach from previous node in less time
                if (low[it] > tim[node])
                {
                    bridges.push_back({it, node});
                }
            }

            else
            {
                // while doing dfs traversal we visited this so this can't be bridge
                // It is in same component
                low[node] = min(low[node], low[it]);
            }
        }
    }

public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
    {
        vector<int> adj[n];
        for (auto it : connections)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        vector<int> vis(n, 0);
        int low[n];
        int tim[n];
        vector<vector<int>> bridges;
        dfs(0, -1, vis, low, tim, adj, bridges);
        return bridges;
    }
};