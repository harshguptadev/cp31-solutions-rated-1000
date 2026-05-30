#include <bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
using namespace std;

#ifndef ONLINE_JUDGE
    #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
    #define debug(x...)
#endif
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

void count(vector<int>&vec, int &k){
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){//12356,12,23,56,123
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>vec;
        long long res=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp<=q){
                vec.emplace_back(1);
            }else{
                vec.emplace_back(0);
            }
        }
        int s=0;
        for(int i=0;i<n;i++){
            
            if(vec[i]==1){
                s++;
            }else{
                if(s>=k){
                    ll N=s-k+1;
                    res=res+((N*(N+1))/2);
                }
                s=0;
            }
        }if(s>=k){
            ll N=s-k+1;
            res=res+((N*(N+1))/2);
        }cout<<res<<"\n";
    }
    return 0;
}