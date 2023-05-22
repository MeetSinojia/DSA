vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> res;
    int vis[V] = {0};
    queue<int> q;

    int start = 0;
    vis[start] = 1;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        res.push_back(node);
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return res;
}