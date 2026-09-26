#include <stdio.h>

int canShip(int loads[], int n, int days, int capacity)
{
    int currentLoad = 0;
    int requiredDays = 1;

    for (int i = 0; i < n; i++)
    {
        if (currentLoad + loads[i] <= capacity)
        {
            currentLoad += loads[i];
        }
        else
        {
            requiredDays++;
            currentLoad = loads[i];
        }
    }

    return requiredDays <= days;
}

int main()
{
    int loads[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(loads) / sizeof(loads[0]);
    int days = 5;

    int low = 0;
    int high = 0;

    // Find minimum and maximum possible capacity
    for (int i = 0; i < n; i++)
    {
        if (loads[i] > low)
            low = loads[i];

        high += loads[i];
    }

    int answer = high;

    // Binary search
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (canShip(loads, n, days, mid))
        {
            answer = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Minimum capacity = %d\n", answer);

    return 0;
}