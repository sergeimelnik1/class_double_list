#include "iostream"
#include "class_double_list.h"


int main(){
    List*head, *cur;
    int num;
    cout << "a=  ";
    cin >> num;
    head = createlist(num);
    cur = head;
    for (int i = 0; i < 9; i++) {
        cout << "a = ";
        cin >> num;
        cur = addToend(cur, num);
    }
    printlist(head);
    cout << endl;
    // Удаляем элемент со значением 3
    deleteElem(&head, 3);
    printlist(head);
    cout << endl;
    //Добавление элемента co значением 4 после элемента со значением 6
    addTomiddle(&head, 4, 6);
    printlist(head);
    cout << endl;
    // Сортировка элементов по возрастанию
    sort(&head);
    printlist(head);

    
    return 0;
}

