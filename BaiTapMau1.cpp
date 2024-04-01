#include <stdio.h>

void TimBoiSoCua7() 
{
    int i;
    printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
    for(i = 10; i <= 99; i++) 
    {
        if(i % 7 == 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() 
{
    TimBoiSoCua7();
    return 0;
}
