void topological_sort(Graph& g, vector<int>& order, bool& loopf){
    int n=g.size();
    vector<int> degin(n);
    for(auto& es : g)
        for(auto& e : es) degin[e.to]++;
    priority_queue<int,vector<int>,greater<int>> que;
    for(int i=0; i<n; i++)
        if(degin[i]==0) que.push(i);
    while(que.size()){
        int v=que.top();
        que.pop();
        order.push_back(v);
        for(auto& e : g[v])
            if(--degin[e.to]==0) que.push(e.to);
    }
    if(order.size() != n) loopf=0;
    else loopf=1;
} 
