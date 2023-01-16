#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using ull = unsigned long long;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rrep(i, n) for(int i=((int)(n)-1); i>=0; --i)
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define MOD2 998244353
#define INF 1000000007
#define LINF 1000000000000000007LL
#define PI 3.14159265359
#define P pair<ll,ll>
template <typename T>
inline bool chmax(T &a, const T &b){
    if(a<b) {a=b; return true;}
    else return false;
}
template <typename T>
inline bool chmin(T &a, const T &b){
    if(a>b) {a=b; return true;}
    else return false;
}
struct Edge{
    int to; ll cost; int rev;
    Edge(int to, ll cost, int rev) : to(to), cost(cost), rev(rev) {}
};
typedef vector<Edge> Edges;
typedef vector<Edges> Graph;
void add_edge(Graph &g,int from,int to,ll cost,bool revFlag,ll revCost){
    g[from].push_back(Edge(to,cost,g[to].size()));
    if(revFlag) g[to].push_back(Edge(from,revCost,g[from].size()-1));
}



void solve(){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout<<setprecision(10)<<fixed;
    solve();
    return 0;
}
