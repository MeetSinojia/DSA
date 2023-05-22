vector<int> topoSort(int n, vector<int> adj[])
{
    int in[n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (auto it : adj[i])
        {
            in[it]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        if (in[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> topo;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for (auto it : adj[node])
        {
            in[it]--;
            if (in[it] == 0)
            {
                q.push(it);
            }
        }
    }

    return topo;
}
