#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct glthread_node_ {
    struct glthread_node_ *left;
    struct glthread_node_ *right;
} glthread_node_t;


typedef struct emp_ {
    char name[30];
    unsigned int salary;
    char designation[30];
    unsigned int emp_id;
    glthread_node_t glnode;
} emp_t ;

#define EMP employee

#define offsetof(struct_name, field_name)  \
     (unsigned int)&((struct_name *)0)->field_name

#define GENERATE_GET_OBJ_FROM_GLNODE(struct_name, obj_name) struct_name* glnode_to_ ## obj_name (glthread_node_t *glnode)
#define FUNCTION_GET_OBJ_FROM_GLNODE(struct_name, obj_name) GENERATE_GET_OBJ_FROM_GLNODE(struct_name, obj_name)

FUNCTION_GET_OBJ_FROM_GLNODE(emp_t, EMP)
{
    return (emp_t *) ((char *)glnode - offsetof(emp_t, glnode));
}

/*Function to print employee details*/
void print_employee_info(emp_t *emp){
    //printf("emp in print_employee_info: %p\n", emp);
    
    printf("Employee name = %s\n", emp->name);
    printf("salary = %u\n", emp->salary);
    printf("designation = %s\n", emp->designation);
    printf("emp_id = %u\n", emp->emp_id);
    
}


/*Implement the below function*/
void print_emp_details(glthread_node_t *glnode){
    print_employee_info(glnode_to_employee (glnode));
}


int main() {
    /*Creating one employee object*/
    emp_t *emp  = calloc(1, sizeof(emp_t));
    strncpy(emp->name, "Neha", strlen("Neha"));
    emp->salary = 50000;
    strncpy(emp->designation, "HR", strlen("HR"));
    emp->emp_id = 21;
    
    //printf("emp in main: %p\n", emp);
    //printf("emp->glnode in main: %p\n", &emp->glnode);
    
    /*Invoking fn to print employee details*/
    print_emp_details (&emp->glnode);
    return 0;
}
