#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(0);
    int n,m; cin >> n >> m;
    set <pair<int,int> > y;
    while(n--){
        int a,b; cin >> a >> b;
        y.insert(make_pair(a,b));
    }
    int firsty = (*y.begin()).first;
    int firstm = (*y.begin()).second;
    int lasty = (*(--y.end())).first;
    int lastm = (*(--y.end())).second;
    for(int j = 0;j<m;j++){
        int a,b; cin >> a >> b;
        if (a < firsty || (a==firsty && b<firstm)) {cout << "-1 -1 "; continue;}
        if (a>lasty){
            cout << lasty << ' ' << lastm << ' ';
        }
        if (a>= firsty && a<= lasty) {
            pair<int,int> temp = make_pair(a,b);
            if (y.find(temp)!=y.end()) cout << "0 0 ";
            else {
                y.insert(temp);
                auto itr = --(y.find(temp));
                cout << (*itr).first << ' ' << (*itr).second << ' ';
                y.erase(temp);
            }
        } 
    }
    return 0;
}
