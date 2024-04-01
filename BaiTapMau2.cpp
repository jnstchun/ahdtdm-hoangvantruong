#include <stdio.h>
#include <math.h>


int KTSoCP(int num) 
{
    int squareRoot = sqrt(num);
    return squareRoot * squareRoot == num;
}

void TimSoCP(int n) 
{
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i < n; i++) 
    {
        if (KTSoCP(i)) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() 
{
    int n;
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);
    TimSoCP(n);
    return 0;
}

