#include <stdio.h>

/* pass string to a function */

void fortune_cookie(char msg[]);
int main()
{

    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
    printf("the quote is stored at: %p", quote);
    return 0;
}
void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
    
}
