#include <stdio.h>

void quick_sort(int a[], int l, int r)
{
    if(l<r)
    {
        int i, j, tmp;

        i = l;
        j = r;
        tmp = a[i];

        while(i<j)
        {
            while(i<j && a[j]>tmp)
                j--;

            if(i<j)
                a[i++] = a[j];

            while(i<j && a[i]<tmp)
                i++;

            if(i<j)
                a[j--] = a[i];
        }

        a[i] = tmp;
        quick_sort(a, l, i-1);
        quick_sort(a, i+1, r);
    }
}

int main(int argc, const char *argv)
{
    int i, j;
    int tmp;
    int arr[9] = {2,5,1,6,7,8,11,2,0};
    int arr[12] = {};

    quick_sort(arr, 0, 8);

    printf("arr:");
    for(i=0; i<9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}