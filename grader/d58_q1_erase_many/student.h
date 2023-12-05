#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  std::vector<bool> check(mSize,true);
  for(size_t i = 0;i<pos.size();++i){
    check[pos[i]] = false;
  }
  T *arr = new T[mCap]();
  for(size_t i = 0,k=0;i<mSize;++i){
    if(check[i]){
      arr[k] = mData[i];
      k++;
    }
  }
  delete [] mData;
  mData = arr;
  mSize -= pos.size();
}

#endif
