void dfs(vector<int> &res, vector<int> adj[], int node, int vis[])
{
    vis[node] = 1;
    res.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(res, adj, it, vis);
        }
    }
}