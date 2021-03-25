#include "../lib/stack.h"
#include "../lib/queue.h"

void printList(List* list);

void printList(List* list) {
    Node* cur = list->head;
    printf("[");
    for(int i = 0; i < getSize(list); i++) {
        printf("%d", cur->data);
        (i < getSize(list) - 1) ? printf(",") : printf("]");
        cur = cur->next;
    }
}

int main() {
    List* list = initList();
    List* list2 = initList();
    for(int i = 0; i < 10; i++) {
        enqueue(list, i);
    }

    printf("size of list2: %d\n", getSize(list2));
    dequeue(list2);
    printList(list);    
    return 0;
}
