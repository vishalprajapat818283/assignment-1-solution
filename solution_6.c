#include <stdio.h>

int main()
{
    float r;
    printf("enter radius of of circle\n");
    scanf("%f", &r);
    int num_points = 0;
    for (int i = -r; i <= r; i++)
    {
        for (int j = -r; j <= r; j++)
        {
            if (((i * i) + (j * j)) < (r * r))
            {
                num_points++;
                printf("(%d,%d)\n", i, j);
            }
        }
    }
    printf("number of points within circle with integer cordinate is %d\n", num_points);
    return 0;
}