#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  for(size_t i = 0;i<mSize-pos-1;i++){
    std::swap(mData[(pos+mFront+i)%mCap],mData[(pos+mFront+1+i)%mCap]);
  }
}

#endif
