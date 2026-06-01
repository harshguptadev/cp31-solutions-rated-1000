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
        int n;
        cin>>n;
        vector<int>vec1(n);
        vector<int>vec2(n);

        for(int i=0;i<n;i++){
            cin>>vec1[i];
        }
        for(int i=0;i<n;i++){
            cin>>vec2[i];
        }
        unordered_map<int,int>hasha;
        unordered_map<int,int>hashb;

        
        int c=1;
        for (int i=1;i<n;i++){
            if(vec1[i-1]==vec1[i]){
                c++; // counting the subarrays
            }else{
                hasha[vec1[i-1]]=max(hasha[vec1[i-1]],c); //Mapping the streak directly to the element
                c=1; // reset counter
            }
        }
        //mapping for the last subarray
        hasha[vec1[n-1]]=max(hasha[vec1[n-1]],c);

        c=1;
        for (int i=1;i<n;i++){
            if(vec2[i-1]==vec2[i]){
                c++;
            }else{
                hashb[vec2[i-1]]=max(hashb[vec2[i-1]],c); //Map the streak directly to the element
                c=1;
            }
        }
        hashb[vec2[n-1]]=max(hashb[vec2[n-1]],c);

        int res=1; //placeholder
        for(int i=0;i<=2*n;i++){
            res=max(res,hasha[i]+hashb[i]);
        }
        cout<<res<<"\n";
    }
    return 0;
}