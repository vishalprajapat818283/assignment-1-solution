#include <stdio.h>

int main()
{
    int num_sell = 100, adv_cost = 1000;
    int pre_sell, pre_cost;
    int new_prof, old_prof;
    new_prof = (num_sell * 500) - (10000 + adv_cost);

    int i = 1;
    while (1)
    {
        old_prof = new_prof;
        new_prof = (num_sell * 500) - (10000 + adv_cost);
        if (new_prof < old_prof)
        {
            break;
        }
        pre_cost = adv_cost;
        adv_cost = 2 * adv_cost;

        pre_sell = num_sell;
        num_sell = ((num_sell * 20) / 100) + num_sell;
    }
    printf("%d %d %d\n", pre_sell, pre_cost, old_prof);
    return 0;
}