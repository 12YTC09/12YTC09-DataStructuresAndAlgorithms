



void addToTail(int el){
    if(isEmpty()){
        tail = new IntSLLNode(el);
        tail -> next = tail;
    }
    else{
        tail -> next = new IntSLLNode(el,tail -> next);
        tail = tail -> next;
    }

}











