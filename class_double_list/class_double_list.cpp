#include "iostream"
#include "class_double_list.h"

void *createlist(int data){
    Node *n = new Node;
    n->data = data;
    n->next = NULL;
    n->prev = NULL;
    return n;
}

void printlist(struct Node *first){
    Node*temp = first;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void * search(Node*node, int val){
    while (node != NULL && node->data != val){
        node = node->next;
    }
    return node;
}

void * addToend(Node*lst, int number){
    struct Node *temp, *p;
    temp = new Node;
    p = lst->next;
    lst->next = temp;
    temp->data = number;
    temp->next = p;
    temp->prev = lst;
    if (p != NULL){
        p->prev = temp;
    }
    return temp;
}

void * addTobegin(Node*lst, int number){
    Node*n = new Node;
    n->next = lst;
    n->prev = NULL;
    n->data = number;
    lst = n;
    return n;
}

void *deletehead(Node*root){
    struct Node*temp;
    temp = root->next;
    temp->prev = NULL;
    delete(root);
    return temp;
}

void *deletend(Node*root){
    struct Node*temp;
    temp = root->prev;
    temp->next = NULL;
    delete(root);
    return temp;
}

void deleteElem(Node**lst, int number){
    struct Node * node = search(*lst, number);
    if (node != NULL) {
        struct Node*p = node->prev;
        struct Node*n = node->next;
        p->next = n;
        n->prev = p;
        delete node;
    }
    else cout << "there is no such element";
}

void addTomiddle(Node**lst, int number, int after){
    struct Node * node = search(*lst,after);
    if (node != NULL) {
        Node*n = new Node;
        struct Node*p = node->next;
        node->next = n;
        n->next = p;
        p->prev = n;
    }
    else cout << "there is no such element";
}

void sort(Node**head) {
    Node* temp = *head;
    while (temp->next) {
        if (temp->data > temp->next->data) {
            int c = temp->data;
            temp->data = temp->next->data;
            temp->next->data = c;
            temp = temp->next;
            sort(head);
        }
        else
            temp = temp->next;
    }	  
}
