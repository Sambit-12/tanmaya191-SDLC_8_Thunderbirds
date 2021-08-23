#include<stdio.h>

void getColorCode(char colorCode[])
{
    int i;
    for(i = 0; i < 4; i++)
        colorCode[i] = getchar();
}
