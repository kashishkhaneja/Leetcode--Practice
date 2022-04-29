class Solution {
public:
    class DSU{
        vector<int> parent;
        vector<int> rank;
        public:
        DSU(int n):parent(n),rank(n){
            for(int i=0;i<n;i++){
                parent[i]=i;
                rank[i]=0;
            }
        }
        int Find(int x){
            if(x==parent[x]){
                return x;
            }
            return parent[x]=Find(parent[x]);
        }
        void Union(int u,int v){
            u=Find(u);
            v=Find(v);
            if(u!=v){
                if(rank[u]<rank[v]){
                    swap(u,v);
                }
                parent[v]=u;
                if(rank[u]==rank[v]){
                    rank[u]++;
                }
            }
        }
    };
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        DSU dsu(n);
        for(int i=0;i<n;i++){
            int p1=dsu.Find(i);
            for(int j:graph[i]){
                int p2=dsu.Find(j);
                if(p1==p2){
                    return false;
                }
                else{
                    dsu.Union(j,graph[i][0]);
                }
            }
        }
        return true;
    }
};