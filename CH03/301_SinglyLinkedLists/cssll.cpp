/*
 * Circular singly linked list 
 *
*/

#include<iostream>

using namespace std;


struct Node {
    int data;
    Node *next;
};

class LinkedList{
    public:
        Node* head;
    public:
        //constructor to create an empty LinkedList
        LinkedList(){
            head = NULL;
        }
};


// test code 

int main()
{
    //create an empty LinkedList
    LinkedList MyList;

    //Add first noode
    Node* first = new Node();

    first -> data = 10;

    //linking with head node 
    MyList.head = first;

    //linking next of the node with hand
    first -> next = MyList.head;

    //Add second node
    Node *second = new Node();
    second -> data =20;

    //linking with first node 
    first -> next = second;
    //linking next of the node with head
    second -> next = MyList.head;



    //Add third node
    Node *third = new Node();

    third->data = 30;

    second -> next = third;

    third -> next = MyList.head;

    return 0;
}







