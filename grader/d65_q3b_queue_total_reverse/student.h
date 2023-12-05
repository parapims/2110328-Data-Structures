#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"
bool R = false;
template <typename T>
void CP::queue<T>::reverse() {
  R = !R;
}

template <typename T>
const T& CP::queue<T>::front() const {
  if(R) return mData[(mFront+mSize-1)%mCap];
  else return mData[mFront];
  
}

template <typename T>
const T& CP::queue<T>::back() const {
  // You MAY need to edit this function
  if (R) return mData[mFront];
  else return mData[(mFront + mSize - 1) % mCap];
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  // You MAY need to edit this function
  ensureCapacity(mSize + 1);
  if (R) {
    mData[(mFront + mCap -1) % mCap] = element;
    mFront = (mFront + mCap -1) % mCap;
  }
  else mData[(mFront + mSize) % mCap] = element;
  mSize++;
}

template <typename T>
void CP::queue<T>::pop() {
  // You MAY need to edit this function
  if(!R) mFront = (mFront + 1) % mCap;
  mSize--;
}

#endif