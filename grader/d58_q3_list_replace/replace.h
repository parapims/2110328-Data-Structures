void replace(const T& x, list<T>& y) {
  for (auto i = begin(); i != end();) {
    if (i.ptr->data==x){
      i = erase(i);
      for(auto &e : y){
        insert(i,e);
      }
    }
    else i++;
  }
}
