#include "dll.h"
#include <memory.h>
#include <stdlib.h>

/* Create and return new empty doubly linked list */
dll_t *get_new_dll(){
    dll_t *dll = calloc(1, sizeof(dll_t));
    dll->head = NULL;
    return dll;
}

/* Add a new application data to DLL */
int add_data_to_dll (dll_t *dll, void *app_data){
    if (dll && app_data) {
        dll_node_t *dll_new_node = calloc(1, sizeof(dll_node_t));
        dll_new_node->left = NULL;
        dll_new_node->right = NULL;
        dll_new_node->data = app_data;
        
        /*Now add this to the front of DLL*/
        if (dll->head) {
            dll_node_t *first_node = dll->head;
            dll_new_node->right = first_node;
            first_node->left = dll_new_node;
            dll->head = dll_new_node;
        }
        else {
            dll->head = dll_new_node;
        }
        
        return 0;
    }
    return -1;
}
