#include <stdio.h>

int main()
{
    int time;
    printf("Type the time required: ");
    scanf("%d", &time);

    int tenS, oneM, tenM, x;
    int exit = 0;
    for (tenS = 0; tenS * 10 <= time; tenS++)
    {

        for (oneM = 0; oneM * 60 <= time; oneM++)
        {

            for (tenM = 0; tenM * 600 <= time; tenM++)
            {
                if (10 * tenS + 60 * oneM + 600 * tenM >= time)
                {
                    printf("Number of button presses = %d", tenS + oneM + tenM);
                    exit = 1;
                    break;
                }
            }
            if (exit == 1)
                break;
        }
        if (exit == 1)
            break;
    }
    return 0;
}
