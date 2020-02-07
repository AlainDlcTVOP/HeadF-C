# include <stdio.h>

int main()
{
    char s[] = "How big is it?";
    char *t = s;

    printf("it is %d\n", sizeof(s));
    printf("it is %d", sizeof(t));
    
    return 0;
}
