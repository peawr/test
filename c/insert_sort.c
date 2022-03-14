#include <stdio.h>

int main(int argc, const char *argv)
{
    int i, j;
    int tmp;
    int arr[9] = {2,5,1,6,7,8,9,3,4};

    for(i=1; i<9; i++)
    {
        tmp = arr[i];

        for(j=i-1; j>=0 && arr[j]>tmp; j--)
        {
            arr[j+1] = arr[j];
        }

        arr[j+1] = tmp;
    }

    printf("arr:");
    for(i=0; i<9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}