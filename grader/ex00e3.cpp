#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    set <long long int> A;
    set <long long int> B;
    for(int i =1;i<=n;++i){
        A.insert(i);
    }
    while(n--){
        long long int N;
        cin >> N;
        B.insert(N);
    }
    if (A==B) cout << "YES";
    else cout << "NO";
    return 0;
}
