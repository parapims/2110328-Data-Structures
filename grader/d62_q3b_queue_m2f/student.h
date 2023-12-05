#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    T temp = mData[(mFront+pos)%mCap];
    for(size_t i = 0;i<pos;i++){
        mData[(mFront+pos+i)%mCap] = mData[(mFront+pos-1+i)%mCap];
    }
    mData[mFront] = temp;
}

#endif
