#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  if(k==1) return mData[0];
  else if(k==2) {
    if(mLess(mData[1],mData[2])) return mData[2];
    else return mData[1];
  }
  else if (k==3) {
    T temp1 = mLess(mData[1], mData[2]) ? mData[1] : mData[2];
    if (temp1 == mData[1]) {
      T temp2 = mLess(mData[5], mData[6]) ? mData[6] : mData[5];
      return (mLess(temp1, temp2)) ? temp2 : temp1;
    }
    else if (temp1 == mData[2]){
      T temp2 = mLess(mData[3],mData[4]) ? mData[4] : mData[3];
      return (mLess(temp1,temp2)) ? temp2 : temp1;
    }
  }
}

#endif
