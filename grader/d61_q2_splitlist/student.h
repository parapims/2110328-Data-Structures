void splitList(list<T>& list1, list<T>& list2) {
    node *ita = mHeader->next,*itb,*lastdata = mHeader->prev;
    int mid = (mSize+1)/2;
    list1.mSize +=mid; list2.mSize +=mSize-mid;
    for(int j = 1;j<mid;j++){
        ita = ita->next;
    }
    itb = ita->next;
    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    ita->next = list1.mHeader;
    list1.mHeader->prev = ita;

    list2.mHeader->prev->next =itb;
    itb->prev=list2.mHeader->prev;
    lastdata->next=list2.mHeader;
    list2.mHeader->prev=lastdata;
    
    mHeader->prev=mHeader;
    mHeader->next=mHeader;
    mSize = 0;  
}
