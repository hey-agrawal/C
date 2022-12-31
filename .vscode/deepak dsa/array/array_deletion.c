#include <stdio.h>

int main()
{
    int a[50], size, pos;
    printf("enter the size of array\n");
    scanf("%d", &size);
    printf("enter the elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the position at which you want to delete element\n");
    scanf("%d", &pos);

    if (pos < 0 || pos > size)
    {
        printf("invalid position");
    }
    else
    {

        for (int i = pos - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
       size--;
    }
    printf("the elements of array are\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}