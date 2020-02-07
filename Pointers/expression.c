#include <stdio.h>

void skip(char *msg);

int main()
{
    char *msg_from_amy = "Don't Call me";
    skip(msg_from_amy);

    int nums[] = {1, 2, 3};
    printf("nums is at %p\n", nums);
    printf("nums is at %p\n", nums + 1);

    return 0;
}
void skip(char *msg)
{
    puts(msg + 6);
}