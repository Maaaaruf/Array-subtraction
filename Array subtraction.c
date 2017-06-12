#include<stdio.h>
main()
{
    int input1[10]={9,7,8,10};
    int input2[10]={5,3,2,5};
    int output[10],i;

    for (i=0;i<=3;i++)
    {
        output[i]=input1[i]-input2[i];
    }

    printf("-----------------------------------------------\n");
    printf("|       Input1      Input2      Output  |\n");
    printf("-----------------------------------------------\n");
    for(i=0;i<=3;i++)
    {
        printf("|\t %d\t      %d\t           %d \t|\n",input1[i],input2[i],output[i]);
    }
     printf("-----------------------------------------------\n");
}
