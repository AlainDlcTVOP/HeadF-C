# include <stdio.h>

int main()
{
    char first_name[20];
    char last_name[20];
    printf("Enter your name \n");
    fgets("%19s %19s", first_name,last_name);
    printf("First: %s Last: %s", first_name,last_name);
    
    return 0;
}
