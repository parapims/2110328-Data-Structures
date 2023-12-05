#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a; cin >>n >> a;
    int i =0;
    vector <int> check;
    check.push_back(a);
    while((check[i]*2)+1 < n){
        if((check[i]*2)+1 < n) check.push_back((check[i]*2)+1);
        if((check[i]*2)+2 < n) check.push_back((check[i]*2)+2);
        i++;
    }
    //sort(check.begin(),check.end());
    cout << check.size() << endl;
    for(auto e:check) cout << e<<' ';
    return 0;
}