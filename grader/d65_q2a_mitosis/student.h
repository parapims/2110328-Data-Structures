#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{   
    if(mSize+b-a+1>mCap) expand(mSize+b-a+1);
    mCap = mSize+b-a+1;
    size_t len = mSize+b-a;
    for(size_t i =0;i<a;i++){
        mData[len-i] = mData[mSize-1-i];
    }
    for(size_t i =a;i>=a&&i<=b;i++){
        mData[len] = mData[mSize-1 - i];
        mData[len] = mData[mSize-1 - i];
    }
}

#endif
