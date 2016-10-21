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
struct Node *createlist(int data);
void printlist(struct Node *first);
struct Node * addTobegin(Node*lst, int number);
struct Node * addToend(Node*lst, int number);
void addTomiddle(List**lst, int number, int after);
void deleteElem(List**lst,int number);
struct Node *deletehead(Node*root);
struct Node *deletend(Node*root);
struct Node * search(Node*node, int val);
void sort(Node**head);
};
