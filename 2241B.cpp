#include<bits/stdc++.h>
using namespace std;

bool help(long long num){
    vector<bool>check(10,false);
    int dis=0;
    while(num>0){
        int digit=num%10;
        if(check[digit]==false){
            check[digit]=true;
            dis++;
            if(dis>2){
                return false;
            }
        }
        num/=10;
    }return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long i=2;
        while(true){
            if((help(i)) && (help(i*x))){
                cout<<i<<"\n";
                break;
            }else{
                i++;
            }
        }
    }
    return 0;
}