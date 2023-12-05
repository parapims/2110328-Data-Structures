#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  size_t n = last-first;
  mSize += n;
  mCap = mSize;
  T *arr = new T[mCap]();
  for(size_t i = 0,c = 0;i<mCap;i++){
    if(i<position - begin()) {arr[i] = mData[c]; c++;}
    else{
      if ((size_t)first<(size_t)last) {
        arr[i] = *first;
        first++;
      }
      else {arr[i] = mData[c]; c++;}
    }

  }
  delete []mData;
  mData = arr;
}

#endif
