# include <stdio.h>

int main()
{
    int consestans [] = {1,2,3};
    int *choise = consestans;
    consestans[0] = 2;
    consestans[1] = consestans[2];
    consestans[2] = *choise;

    printf("I'm going to pick contestans number %i\n", consestans[2]);
    
    return 0;
}
