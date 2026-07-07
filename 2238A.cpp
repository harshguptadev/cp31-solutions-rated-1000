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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>veca(n);
        vector<int>vecb(n);
        for(int i=0;i<n;i++){
            cin>>veca[i];
        }
        for(int i=0;i<n;i++){
            cin>>vecb[i];
        }
        int cost1=0;
        int cost2=c;
        for(int i=0;i<n;i++){
            if(veca[i]<vecb[i]){
                cost1=-1;
                break;
            }
            cost1+=(veca[i]-vecb[i]);
        }
        sort(veca.begin(),veca.end());
        sort(vecb.begin(),vecb.end());
        for(int i=0;i<n;i++){
            if(veca[i]<vecb[i]){
                cost2=-1;
                break;
            }
            cost2+=(veca[i]-vecb[i]);
        }
        if(cost1==-1 && cost2==-1){
            cout<< -1<<"\n";
        }else if(cost1>=0 && cost2>=0){
            cout<<min(cost1,cost2)<<"\n";
        }else{
            cout<<max(cost1,cost2)<<"\n";
        }
    }
    return 0;
}