#ifndef LIST_H
#define LIST_H

#define LIST(name, type)   \
    struct name            \
    {                      \
        type value;        \
        struct name *prev; \
        struct name *next; \
    }

#define LIST_INIT(node_ptr, val)                                        \
    do                                                                  \
    {                                                                   \
        (node_ptr) = (__typeof__(node_ptr))malloc(sizeof(*(node_ptr))); \
        if (node_ptr)                                                   \
        {                                                               \
            (node_ptr)->value = (val);                                  \
            (node_ptr)->prev = NULL;                                    \
            (node_ptr)->next = NULL;                                    \
        }                                                               \
        else                                                            \
        {                                                               \
            printf("memory alloc failed\n");                            \
        }                                                               \
    } while (0)


#define LIST_ADD_AT_BEGINNING(head, val)                         \
    do                                                           \
    {                                                            \
        __typeof__(head) node = (struct *)malloc(sizeof(*head)); \
                                                                 \
        if (node)                                                \
        {                                                        \
            node->value = (val);                                 \
            node->prev = NULL;                                   \
            node->next = (head);                                 \
            if ((head) != NULL)                                  \
            {                                                    \
                (head)->prev = node;                             \
            }                                                    \
                                                                 \
            (head) = node;                                       \
        }                                                        \
        else                                                     \
        {                                                        \
            printf("memory alloc failed\n");                     \
        }                                                        \
    } while (0)

#endif