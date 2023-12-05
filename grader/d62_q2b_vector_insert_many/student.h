#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  T *arr = new T[mSize+data.size()]();
  sort(data.begin(),data.end());
  int n = 0,c=0;
  for (size_t i = 0;i<mSize;i++){
    if ((int)i == data[c].first){
      arr[n] = data[c].second;
      n++; c++;
    }
    arr[n] = mData[i];
    n++;
  }
  if(data[c].first == mSize) arr[n] = data[c].second;
  mSize += data.size();
  delete [] mData;
  mData = arr;
}

#endif
