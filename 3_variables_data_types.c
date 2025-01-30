// https://en.wikipedia.org/wiki/C_data_types

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x;      // declaration
    x = 5;      // initialization
    int y = 10; // declaration and initialization

    int num = 123;                                  // integer %d (-2,147,483,648 to +2,147,483,647) (4 bytes)
    unsigned int unum = 123;                        // unsigned integer %u (0 to 4,294,967,295) (4 bytes)
    long lon = 1234567890;                          // long integer %ld
    long long int lli = 123456;                     // long long integer %lld (-9,223,372,036,854,775,808 to +9,223,372,036,854,775,807) (8 bytes)
    unsigned long long llu = 18446744073709551615U; // unsigned long long integer %llu (0 to 18,446,744,073,709,551,615) (8 bytes)
    printf("llu %llu\n", llu);
    short sho = 32767;           // short integer %d (-32,768 to +32,767) (2 bytes)
    unsigned short ushnum = 123; // unsigned short integer %d (0 to 65,535) (2 bytes)
    printf("num: %d\n", num);
    printf("lon: %ld\n", lon);
    printf("\n");

    float fl = 123.456;     // floating point %f
    double dbl = 123.45678; // double %lf
    printf("fl: %f\n", fl);
    printf("dbl: %lf\n", dbl);
    printf("\n");

    char ch = 'A';           // character %c (-127 to +127)
    char ch2 = 78;           // ASCII character %c
    unsigned char ch3 = 255; // unsigned character %c (0-255)
    printf("ch: %c\n", ch);
    printf("ch2: %c\n", ch2);
    printf("https://tr.wikipedia.org/wiki/ASCII\n");
    char str[] = "Hello C!"; // string (array of characters) %s
    printf("str: %s\n", str);
    printf("\n");

    bool boo = true; // boolean %d
    printf("boo: %d\n", boo);

    // %.1 = desimal precision
    // %1 = minimum field width
    // %- = left align
    return 0;
}
