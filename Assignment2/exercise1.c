#include <stdio.h>
#include <stdlib.h>


#define ITERATE_ARRAY_BEGIN(arrptr, array_size, start_index, scansize, out_index)                 \
{                                                                                                 \
    /* Provide your Implementation here>    */                                                    \
    unsigned int j;                                                                               \
    for (j = 0, out_index = start_index; j < scansize; j++, out_index++, out_index %= array_size) \


#define ITERATE_ARRAY_END  }                                                                      \


int
main(){
    unsigned int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    unsigned int i;
    
    /* Basic test */
    ITERATE_ARRAY_BEGIN(arr, 10, 5, 10, i) {
        printf("arr[%u] = %u\n", i, arr[i]);
    } ITERATE_ARRAY_END;
    
    printf("------------------------------------\n");
    
    /* Test for wrap around (scan size greater than array size)*/
    ITERATE_ARRAY_BEGIN(arr, 10, 5, 11, i) {
        printf("arr[%u] = %u\n", i, arr[i]);
    } ITERATE_ARRAY_END;
    
    return 0;
}
//<Provide your Implementation here>
