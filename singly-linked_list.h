#define SINGLELINK_H
#ifndef SINGLELINK_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Data structure for the linked-list
struct list 
{
    char *name;
    int age;
    struct list *next;
};

// prototype for the print_list function
void print_list(struct list *head);

// prototype for the add_at_beg function
struct list* add_at_beg(struct list *head, char *new_name, int new_age);

// prototype for the add_at_end function
void add_at_end(struct list *head, char *new_name, int new_age);

// prototype for the add_at_pos function
void add_at_pos(struct list *head, char *new_name, int new_age, int pos);
#endif