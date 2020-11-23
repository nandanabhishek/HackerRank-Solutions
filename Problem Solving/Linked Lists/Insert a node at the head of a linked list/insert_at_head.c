
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

    SinglyLinkedListNode *newNode, *ptr;
    ptr=llist;
    newNode = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));

    newNode -> data= data;
    newNode -> next= ptr;
    llist=newNode;

    return llist;
    
}
