#include "singly-linked_list.h"

/**
 * print_list - prints the elements in the singly linked list
 * 
 * @param head: The pointer to the head node of the list
 * @return: void
 */
void print_list(struct list *head)
{
    // count holds the number of elements in the list
    int count = 0;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else 
    {
        struct list *ptr = head;
        
        while (ptr != NULL)
        {
            printf("\nStudent name: %s\n", ptr->name);
            printf("Student age: %d\n", ptr->age);
            printf("================\n");
            count++;
            ptr = ptr->next;
        }
    }
    
    if (count == 1)
    {
        printf("\nThere is only %d student in the list", count);
    }
    else if (count > 1)
    {
        printf("\nThere are %d students in the list\n", count);
    }
}


/**
 * add_at_beg - function adds element at the beginning of a linked list
 * 
 * @param head: The pointer to the head node of the list
 * @param new_name: name of the new person to be added
 * @param new_age: age of the new person to be added
 * @return: pointer to the new list which is then assigned to head in the main function
 */
struct list* add_at_beg(struct list *head, char *new_name, int new_age)
{
    // allocate space for the new information
    struct list *ptr = malloc(sizeof(struct list));
    ptr->name = new_name;
    ptr->age = new_age;
    ptr->next = NULL;
    
    ptr->next = head;
    
    head = ptr;
    
    return head;
}

/**
 * add_at_end - function adds a new node at the end of the list
 * 
 * @param head: The pointer to the head node of the list
 * @param new_name: name of the new person to be added
 * @param new_age: age of the new person to be added
 * @return: void
 */
void add_at_end(struct list *head, char *new_name, int new_age)
{
    struct list *ptr = head;
    struct list *temp = malloc(sizeof(struct list));
    
    temp->name = new_name;
    temp->age = new_age;
    temp->next = NULL;
    
    // link it to the end of the list
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}


/**
 * add_at_pos - function adds a new node at the specified position
 * 
 * @param head: The pointer to the head of the list
 * @param new_name: name of the new person to be added to the list
 * @param new_age: age of new person to be added to the list
 * @param pos: specified position where new person is to be added in the list
 * @return: void
 */
void add_at_pos(struct list *head, char *new_name, int new_age, int pos)
{
    if (pos == 1)
    {
        printf("\nPlease use the add_at_beg() function to add %s at position 1\n", new_name);
        printf("\n");
        EXIT_FAILURE;
    }
    else
    {
        int count = 0;
        struct list *ptr = head;
        struct list *temp = malloc(sizeof(struct list));
        temp->name = new_name;
        temp->age = new_age;
        temp->next = NULL;

        if (pos == 2)
            {
                temp->next = ptr->next;
                ptr->next = temp;
            }
        
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next; 
            if (count == (pos - 2))
            {
                temp->next = ptr->next;
                ptr->next = temp;
                continue;
            }
        }
        printf("\n%s has been added successfully at position %d\n", new_name, pos);
    }
}
