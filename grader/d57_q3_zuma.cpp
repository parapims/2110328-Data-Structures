#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int N,K,V,cnt=0; cin >> N >> K >> V;
    list <int> l;
    while(N--){
        int t; cin >> t;
        l.push_back(t);
    }
    auto it = l.begin();
    while(K--) ++it;
    l.insert(it,V);
    auto rg = it;
    --it;
    int temp = V;
    while(l.size()!=0){
        while(*rg==temp) {
            cnt++; ++rg;
        }
        --rg;
        while(*it==temp){
            cnt++; --it;
        }
        if(cnt>=3){
            while(it!=rg){
                rg =l.erase(rg);
                rg--;
            }
        }
        else break;
        temp = *it;
        cnt = 0;
    }
    for (auto e:l) cout << e<<' ';
    return 0;
}