SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode *newNode=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode *ptr=head;

    newNode->data= data;
    newNode->next=NULL;
    if(head == NULL) {
        head = newNode;
    }
    else {
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next=newNode;
    }
    return head;
}
