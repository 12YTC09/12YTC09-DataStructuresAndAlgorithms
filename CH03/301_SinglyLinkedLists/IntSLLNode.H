//************************IntSLLNode.h




class IntSLLNode {

    public:

        //first constructor : initializes the next pointer
        IntSLLNode(){  
            next = 0;
        }
        IntSLLNode(int i, IntSLLNode *in = 0){
            info =i;
            next = in;

        }


        int info;           //store information
        IntSLLNode *next;   //used to link nodes to form a linked list 


}









