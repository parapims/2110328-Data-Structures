void shift(int k) {
	if (mSize==1) return;
	
	while(k<0){
		k+=mSize;
	}
	k %= mSize;
	auto itb = begin();
	for (int i =0;i<k;++i){
		++itb;
	}
	
	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;
	itb.ptr->prev->next = mHeader;
	mHeader->prev = itb.ptr->prev;
	mHeader->next = itb.ptr;
	itb.ptr->prev =mHeader;
}
