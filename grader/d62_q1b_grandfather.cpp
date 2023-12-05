#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int n,m; cin >> n >> m;
    map <string,string> M;
    string f,s,s1,s2;
    for (int i = 0;i<n;i++){
        cin >> f >> s;
        M[s] = f;
    }
    for (int i = 0;i<m;i++){
        cin >> s1 >> s2;
        if(s1==s2) {cout << "N0" << endl;continue;}
        if(M.find(s1)==M.end() || M.find(s2)==M.end()|| M.find(M[s1])==M.end()||M.find(M[s2])==M.end()|| M[M[s1]]!=M[M[s2]]) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}


