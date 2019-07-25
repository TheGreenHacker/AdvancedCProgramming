#include "dll.h"
#include <memory.h>
#include <stdlib.h>

/* Remove the node containing data from DLL, if found */
int remove_data_from_dll_by_data_ptr(dll_t *dll, void *data) {
    dll_node_t *curr = dll->head;
    while (curr && curr->data != data) {
        curr = curr->right;
    }
    
    if (curr) {
        /* Unlink the node from its previous node and then from its next node. */
        if (curr->left) {
            curr->left->right = curr->right;
        }
        if (curr->right) {
            curr->right->left = curr->left;
        }
        free(curr);
        return 0;
    }
    return -1;
}

/* Returns whether the DLL is empty or not */
int is_dll_empty(dll_t *dll) {
    return !dll_t->head ? 0 : -1;
}

/* Empties the DLL. */
void drain_dll(dll_t *dll) {
    dll_node_t *curr = dll->head;
    dll_node_t *next; // we must first save the reference to the right neighbor since we will not have a reference to the current node after deleting it
    while (curr) {
        next = curr->right;
        remove_data_from_dll_by_data_ptr(dll, curr->data);
        curr = next;
    }
}
