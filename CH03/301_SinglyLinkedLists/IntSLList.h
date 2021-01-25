//***************************installist.h
//連結串列
//singly-linked list class to store integears
//

#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST


class InStLLNode {
    InStLLNode(){
        next =0;
    }
    InStLLNode(int el,InStLLNode *ptr = 0){
        info = el; next =ptr;
    }
    int info;
    IntSLLNode *next;
};


class IntSLList {
    public:
        IntSLList(){
            head = tail = 0;
        } //constructor
        ~IntSLList();
        int isEmpty(){
            return head == 0;
        }
        void addToHead(int);
        void addToTail(int);
        int deleteFromHead();  // delete the head and return its info;
        int deleteFromTail();  // delete the tail and return its info;
        void deleteNode(int);
        bool isInList(int) const ;

    private:
        IntSLLNode *head,*tail;

}



#endif
