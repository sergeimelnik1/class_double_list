using namespace std;

class double_linked_list {
private:

struct Node{
    int data;
    struct List *next;
    struct List *prev;
};
    Node* head, tail;
    
public:
void *createlist(int data);
void printlist(struct Node *first);
void * addTobegin(Node*lst, int number);
void * addToend(Node*lst, int number);
void addTomiddle(List**lst, int number, int after);
void deleteElem(List**lst,int number);
void *deletehead(Node*root);
void *deletend(Node*root);
void * search(Node*node, int val);
void sort(Node**head);
};
