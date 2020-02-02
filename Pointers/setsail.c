#include <stdio.h>

void go_south_est(int *lat, int *lon); // Pass int the latitude and longitude

int main(int argc, char const *argv[])
{
    int latitude = 32;
    int longitude = -64;
    go_south_est(&latitude , &longitude);
    printf("Avats! Now at: [%i, %i]\n", latitude,longitude);
    return 0;
}
void go_south_est(int *lat, int *lon)
{

    *lat = *lat - 1;
    *lon = *lon + 1;
}