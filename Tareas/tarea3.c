/* 
 * Tarea 3: INSERTING A NODE INTO A SORTED DOUBLY LINKED LIST
			CORRECT:6/8 TEST CASES 
		*/

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    struct DoublyLinkedListNode *aux=NULL;
    struct DoublyLinkedListNode *aux2=NULL;
    aux=head;
    aux2=create_doubly_linked_list_node(data);
    if(head==NULL){
        return aux2;
    }
    while(head->data<data && head->next){
        head=(head->next);
    }
    if(head->data==data){
        aux2->next=head->next;
        head->next->prev=aux2;
        aux2->prev=head;
        head->next=aux2;
        return aux;
    }
    if((head->prev)==NULL){
        head->prev=aux2;
        aux2->next=head;
        return aux2;
    }
    if(head->data>data){
        head->prev->next=aux2;
        aux2->prev=head->prev;
        head->prev=aux2;
        aux2->next=head;
        return aux;
    }
    head->next=aux2;
    aux2->prev=head;
    return aux;  
}
