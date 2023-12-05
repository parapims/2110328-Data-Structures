#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <set>
#include <iostream>
using namespace std;

template <typename T>
void CP::vector<T>::uniq() {
  set<T> c;
  T *arr = new T[mSize]();
  for(size_t i = 0,C=0;i<mSize;i++){
    if(c.find(mData[i]) == c.end()){
      arr[C] = mData[i];
      c.insert(mData[i]);
      C++;
    }
  }
  mSize = c.size();
  delete [] mData;
  mData = arr;
}

#endif
