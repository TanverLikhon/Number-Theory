#include<stdio.h>
main()
{
    int per;
    while(scanf("%d",&per))
    {
        if(per>=85)
        {
            printf("A grade");
        }
        else if(per<85 && per>=75)
        {
            printf("B grade");
        }
        else if(per<75 && per>=50)
        {
            printf("C grade");
        }
        else if(per<50 && per>=30)
        {
            printf("D grade");
        }
        else
        {
            printf("Fail");
        }

    }


}
