#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(0);
    long long int n,m,k;
    cin >> n >> m >> k;
    vector<long long int> N;
    for(int i = 0;i<n;++i){
        long long int t;
        cin >> t;
        N.push_back(t);
    }
    sort(N.begin(),N.end());
    for (int i = 0;i<m;++i){
        long long int x; cin >> x;
        int low = x-k;
        int up = x+k;
        auto lower = lower_bound(N.begin(), N.end(), low);
        auto upper = upper_bound(N.begin(), N.end(), up);
        int count = upper-lower;
        cout << count << ' ';
    }
    return 0;
}