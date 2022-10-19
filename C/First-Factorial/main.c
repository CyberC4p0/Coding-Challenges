#include <stdio.h> 
#include <string.h>

void FirstFactorial(int num) {

    int factorial = num - 1;
    int index, total;
    int total_loops = factorial;

    for (index = 0; index < total_loops; index++)
    {
        num = num * factorial;
        factorial--;
    }

    printf("%d", num);
}

int main(void) {

    // keep this function call here
    FirstFactorial(coderbyteInternalStdinFunction(stdin));
    return 0; 
}
