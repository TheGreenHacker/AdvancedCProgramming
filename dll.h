#ifndef DLL_H
#define DLL_H

/*Header file for Doubly Linked List*/

typedef struct dll_node_{
    void *data;
    struct dll_node_ *left;
    struct dll_node_ *right;
} dll_node_t;

typedef struct dll_{
    dll_node_t *head;
} dll_t;


/* Public Function declaration to create and return
 * a new empty doubly linked list*/
dll_t *get_new_dll();

/*Public Function declaration to add a new application
 * data to DLL*/
/* Return 0 on success, -1 on failure */
int add_data_to_dll (dll_t *dll, void *app_data);

/* Return 0 on success, -1 on failure */
int remove_data_from_dll_by_data_ptr(dll_t *dll, void *data);

/* Return 0 if empty, -1 otherwise */
int is_dll_empty(dll_t *dll);

/* Delete all nodes from a dll, but does not free app data */
void drain_dll(dll_t *dll);

#endif
