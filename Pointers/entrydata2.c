#include <stdio.h>

/* Just like the scanf() function, it takes a char
pointer, but unlike the scanf() function, the fgets()
function must be given a maximum length: */
int main()
{
    char food[5];
    printf("Enter favorite food:\n");
    fgets(food, sizeof(food), stdin); //tdin just means the data will be coming from the keyboard
     
    return 0;
}
