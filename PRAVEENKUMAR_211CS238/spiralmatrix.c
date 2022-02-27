#include <stdio.h>
int main()
{
    int a, c = 0, new = 1, begin, end;
    scanf("%d", &a);
    int arr[a][a];
    begin = 0, end = a - 1;
    while(begin < end)
    {
        for (int i = begin; i < end; i++)
        {
            arr[begin][i] = new;
            new++;
        }
        for (int i = begin; i < end; i++)
        {
            arr[i][end] = new;
            new++;
        }
        for (int i = end; i > begin; i--)
        {
            arr[end][i] = new;
            new++;
        }
        for (int i = end; i > begin; i--)
        {
            arr[i][begin] = new;
            new++;
        }
        begin++;
        end--;
    }
    if (1&a) arr[(a-1)/2][(a-1)/2] = new;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if (arr[i][j] <= 9) printf("%d    ", arr[i][j]);
            else if (arr[i][j] <= 99) printf("%d   ", arr[i][j]);
            else if (arr[i][j] <= 999) printf("%d  ", arr[i][j]);
            else if (arr[i][j] <= 9999) printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}