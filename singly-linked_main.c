#include "singly-linked_list.h"

int main() {
    struct list *head;
    
    head = malloc(sizeof(struct list));
    head->name = "Jenny";
    head->age = 19;
    head->next = NULL;
    

    add_at_end(head, "Authur", 19);
    add_at_end(head, "James", 20);
    add_at_end(head, "Kelvin", 17);
    
    add_at_pos(head, "Jimmy", 22, 3);

    add_at_pos(head, "John", 22, 4);

    add_at_pos(head, "Mike", 14, 5);

    add_at_pos(head, "Joseph", 16, 2);

    add_at_pos(head, "Joshua", 27, 7);

    add_at_pos(head, "Job", 19, 7);
    
    print_list(head);

    return 0;
}