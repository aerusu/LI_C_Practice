//micah li

/*
Things I am learning in Sequence 1:
-Macros (#define)
-Enumerations
-Typedef
-References & Pointers
-Structs
*/
#include <stdio.h>

void doubleVar(int*);

int main(){

    int num = 10;
    int *num_ptr = &num;
    doubleVar(num_ptr);
    printf("%d", num);

    return 0;
}

void doubleVar(int *myNum){
    *myNum *= 2;
    return;
}