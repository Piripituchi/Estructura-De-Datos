//Tarea: insertar un nodo al final de una lista ligada. 	

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode* aux= malloc(sizeof(SinglyLinkedListNode));
aux->next=head;
head=aux;
while(aux->next!=NULL){
aux->data=aux->next->data;
aux=aux->next;
}
aux->data=data;
return head;
}
