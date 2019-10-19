//Tarea: Detectar ciclos en una lista ligada.

bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode* aux;
SinglyLinkedListNode* aux2;
if(!head){
return NULL;
}
aux=head;
aux2=head->next;
while(aux2!=NULL){
if(aux==aux2){
return true;
}
aux=aux->next;
if(aux2->next==NULL){
return false;
}
aux2=aux2->next->next;
}
return false;
}
