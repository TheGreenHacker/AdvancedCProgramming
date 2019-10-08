# Assignment3
Questions for this assignment
1. Given the employee structure definition as below, provide the implementation of the function :

void print_emp_details(glthread_node_t *glnode)



typedef struct emp_ {



  char name[30];

  unsigned int salary;

  char designation[30];

  unsigned int emp_id;

  glthread_node_t glnode;

} emp_t ;



/*Function to print employee details*/

void

print_employee_info(emp_t *emp){

    printf("Employee name = %s\n", emp->name);

    printf("salary = %u\n", emp->salary);

    printf("designation = %s\n", emp->designation);

    printf("emp_id = %u\n", emp->emp_id);

}



/*Creating one employee object*/

    emp_t *emp  = calloc(1, sizeof(emp_t));

    strncpy(emp1->name, "Neha", strlen("Neha"));

    emp1->salary = 50000;

    strncpy(emp1->designation, "HR", strlen("HR"));

    emp1->emp_id = 21;

   

/*Invoking fn to print employee details*/

    print_emp_details (&emp->glnode);



/*Implement the below function*/

  void print_emp_details(glthread_node_t *glnode){

  }

2. Write a macro which generates a function which returns pointer to the object from glthread_node_t member.

For example,  for the data structure below :

typedef struct emp_ {

  char name[30];

  unsigned int salary;

  char designation[30];

  unsigned int emp_id;

  glthread_node_t glnode;

} emp_t ;



macro should generate a function called "glnode_to_employee" whose prototype is as below :

emp_t *

glnode_to_employee (glthread_node_t *glnode);

The above function must return pointer to the emp_t object, when invoked with address of glnode member of emp_t as an argument.




