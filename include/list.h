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


#endif