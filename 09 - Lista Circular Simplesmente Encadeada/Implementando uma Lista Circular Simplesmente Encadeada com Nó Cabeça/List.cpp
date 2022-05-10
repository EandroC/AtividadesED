#include <iostream>
#include <string>
#include <climits>
#include "List.h"

struct Node {
    int value;
    Node *next;
    ~Node() { std::cout << "no com valor " << value << " liberado" << std::endl; }
};

List::List() {
    head = new Node;
    head->next = head;
    head->value = 77777777;
}

List::~List(){
   if(!this->empty()){
        Node *aux = head->next;
        Node *t = aux;
        while(aux!=head){
            aux=aux->next;
            delete t;
            t=aux;
        }
        
    }

    delete head;
    std::cout<<"lista liberada\n";
} 

bool List::contains(int x){
    if(!this->empty()){
        Node *aux = head->next;
        while(aux!=head){
            if(aux->value ==x){
                return true;
            }
            aux=aux->next;
       }
        return false;
   }
}

bool List::empty(){
    return head->next==head;
}

int List::size(){
    if(!this->empty()){
        int count= 0;
        Node *aux = head->next;
        while(aux!=head){
            count++;
            aux=aux->next;
            
        }
        return count;
    }
    return 0;
}

void List::clear(){
    if(!this->empty()){
        Node *aux = head->next;
        Node *t = aux;
        while(aux!=head){
            aux=aux->next;
            delete t;
            t=aux;
        }
        head->next=head;
        
    }
    
} 
    
void List::add_back(int x){
 
    if(head == nullptr) {
        Node *novo = new Node;
        novo->value = x;
        novo->next = novo;
        head = novo;
    }
    else {
        Node *aux = head;
        while(aux->next != head) {
            aux = aux->next;
        }
        Node *novo = new Node;
        novo->value = x;
        novo->next = head;
        aux->next = novo;
    }

}
    
void List::add_front(int x){
    Node *novo = new Node;
    Node *aux = head->next;
    
    novo->value=x;
    head->next=novo;
    novo->next=aux;
  
}
    
int List::remove_front(){
    int valor=0;
    if(!this->empty()){
    Node *aux = head, *aux2 = head;
        while(aux->next != head) {
            aux = aux->next;
        }
        
    valor= aux->value;
     
    aux= head->next->next;
    delete head->next;
    head->next=aux;

    return valor;
    
    }else{
        return INT_MIN;
    }
}

int List::remove_back(){
    if(!this->empty()){
        Node *aux = head;
        Node *t = aux;
        while(aux->next!=head){
            t=aux;
            aux=aux->next;
            
        }
        int res=aux->value;
        delete aux;
        t->next=head;
        
        return res;
    }else{
        return INT_MIN;
    }
    
    
}

void List::remove(int x){

   if(!this->empty()){
       Node *aux=head;
       while(aux->next!=head){
           if((aux->next)->value==x){
               Node *t=aux->next->next;
               delete aux->next;
               aux->next=t;
               break;
           }
           aux=aux->next;
       }
   }
    
}

void List::removeAll(int x){

    while(contains(x)){
        remove(x);
    }
} 
    
std::string List::toString(){ 

   std::string s= "[";
   
    if(!this->empty()){
        Node *aux=head->next;
       
       while(aux!=head){
            s+=std::to_string(aux->value);
            aux=aux->next;
            if(aux!=head){
                s+=",";
            }
       }
   }
   
    
    return s + "]";
    
}

Node* List::search(int x) {
  
    Node *aux = head;
    
    if(!this->empty()){
    while(aux->next != head) {
        if(aux->next->value == x) {
            return aux;
        }
        aux = aux->next;
        }
    }
     
    return nullptr;

}



// Completar