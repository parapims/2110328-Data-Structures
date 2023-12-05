#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> check;
    for(auto e:A) {
        if (check.find(e)==check.end()){
            check.insert(e);
            v.push_back(e);
        }
    }
    for(auto e:B){
        if (check.find(e)==check.end()){
            check.insert(e);
            v.push_back(e);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> x;
    for(auto e : A) x.insert(e);
    set<T> y;
    for(auto e:B){
        if(x.find(e)!=x.end()) y.insert(e);
    }
    for (auto e:A){
        if(y.find(e)!=y.end()) v.push_back(e);
    }
    return v;
}
