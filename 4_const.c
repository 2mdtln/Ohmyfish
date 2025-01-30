#include <stdio.h>

int main()
{
    const int CINT = 21; // cant be changed..
    // CINT = 22;           // change!
    // error: assignment of read-only variable 'CINT'
    printf("num: %d\n", CINT);

    return 0;
}