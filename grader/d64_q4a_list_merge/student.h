#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  
  // auto itr = ls.begin();
  // for(int i =0;i<ls.size();i++){
  //   mSize += (*itr).mSize;
  //   if((*itr).mSize > 0){
  //     mHeader->prev->next = ((*itr).begin()).ptr;
  //     ((*itr).begin()).ptr->prev= mHeader->prev;
  //     auto last = (*itr).end();
  //     last--;
  //     last.ptr->next = mHeader;
  //     mHeader->prev = last.ptr;
  //     ((*itr).end()).ptr->prev=((*itr).end()).ptr;
  //     ((*itr).end()).ptr ->next = ((*itr).end()).ptr;

  //   }
  //   (*itr).mSize = 0;
  //   itr++;
  // }


  for (auto &e : ls){
    mSize += e.mSize;
    if(e.mSize>0){
      mHeader->prev->next = e.mHeader->next;
      e.mHeader->next->prev = mHeader->prev;

      e.mHeader->prev->next = mHeader;
      mHeader->prev = e.mHeader->prev;

      e.mHeader->next = e.mHeader;
      e.mHeader->prev = e.mHeader;
    }
    e.mSize = 0;
  }
}

#endif




