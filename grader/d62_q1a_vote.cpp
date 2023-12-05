#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,result; cin >> n >> k;
    map<string,int> check;
    while(n--){
        string a; cin >> a;
        check[a]++;
    }
    priority_queue<pair<int,string> > q;
    k = min(k,(int)check.size());
    for(auto e:check){
        q.push(make_pair(e.second,e.first));
    }
    while(k--){
        result = (q.top()).first;
        q.pop();
    }
    cout << result << endl;
    return 0;
}
