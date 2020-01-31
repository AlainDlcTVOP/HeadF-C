# include <stdio.h>

int y = 1; // lives in global section 1000.000

int main()
{
    int x = 4; // lives in the stack 4.100.00

    printf("x is stored at %p\n", &x);  // & is the addres of x
    return 0;
}
