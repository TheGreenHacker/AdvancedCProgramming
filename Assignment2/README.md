# Assignment2
Follow the instructions for each Question.

Questions for this assignment
1. In the program below, You need to provide the implementation of Macro ITERATE_ARRAY_BEGIN. This macro must facilitate the developer to iterate over arrays.

The Macro accepts 5 arguments :

arrptr - base pointer to the array

array_size

start_index - index of the array where array scan need to be start from

scansize - No of elements of the array to be scanned, can be more than size of the array. Wrap it again from beginning of the array if scan reaches the end of the array.

out_index - this is the index value which macro should set





#include <stdio.h>

#include <stdlib.h>



#define ITERATE_ARRAY_BEGIN(arrptr, array_size, start_index, scansize, out_index)  \

<Provide your Implementation here>



#define ITERATE_ARRAY_END   }}





int

main(int argc, char **argv){

    unsigned int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    unsigned int i;

    ITERATE_ARRAY_BEGIN(arr, 10, 5, 10, i) {

        printf("arr[%u] = %u\n", i, arr[i]);

    } ITERATE_ARRAY_END;

    return 0;

}



Expected output :

arr[5] = 6

arr[6] = 7

arr[7] = 8

arr[8] = 9

arr[9] = 10

arr[0] = 1

arr[1] = 2

arr[2] = 3

arr[3] = 4

arr[4] = 5

2. Download the file exercise2q.c.

Instruction are written as comment in main(). Pls read.

You need to provide the implementation of below macros in lines - [39-50]

ITERATE_NBRS_BEGIN(node, nbrnode)

ITERATE_NBRS_END

ITERATE_ONE_HOP_NBRS_BEGIN(node, nbrnode)

ITERATE_ONE_HOP_NBRS_END

Expected output :

Nbrs of A :

Nbr name = B

Nbr name = E

Nbrs of H :

Nbr name = C

Nbrs of D :

Nbr name = B

Nbr name = E

Nbr name = F

One hop Nbrs of A :

Nbr name = D

Nbr name = C

Nbr name = D
