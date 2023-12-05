#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  int A1 = a - begin(), B1 = b - begin();
  int A2 = A1+m-1,B2= B1+m-1;
  if(m>0&&(A2<B1 || A1 > B2)&&(A1<mSize&&A2<mSize&&B1<mSizw&&B2<mSize)){
    for(size_t i = 0;i<m;i++){
      //std::swap(mData[A1+i],mData[B1+i]);
      T temp = mData[A1+i];
      mData[A1+i] = mData[B1+i];
      mData[B1+i] = temp;
    }
    return true;
  }
  else return false;
}

#endif
