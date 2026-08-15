#ifndef LIST_H
#define LIST_H

typedef enum data_type{
CHAR, SHORT, INT, LONG, FLOAT, DOUBLE, LONG_DOUBLE, LONG_LONG
} datum;

struct node{
    void* value;
    struct node* prev;
    struct node* next;
};

void prepend(struct node* node, void* value, datum data_type);
void append(struct node* node, void* value, datum data_type);
void remove(struct node* node, void* value);
void clear(struct node* node);
// struct node* find(void* value);
bool is_empty(struct node* node);

#endif 