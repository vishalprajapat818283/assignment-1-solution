#include <stdio.h>

int main()
{
    int i, j;
log:
    printf("enter value of i\n");
    scanf("%d", &i);
    printf("enter value of j\n");
    scanf("%d", &j);

    int temp;
    if (j != 0)
    {
        temp = i / j;
    }
    else
    {
        printf("value of j must be non zero\n");
        goto log;
    }

    int round_off_num = j * (temp + 1);
    printf("round off %d to the next largest multiple of another integer %d is %d\n", i, j, round_off_num);

    return 0;
}