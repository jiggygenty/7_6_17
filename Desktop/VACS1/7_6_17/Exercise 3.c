#include<stdio.h>
#include<math.h>

void main()
{
    FILE* fptr;
    int i,a=1,b=1,index;
    double  array[10000],farray[50],fibsum=0,carray[15],fact=1;
    fptr=fopen("10000.dat","r");
    for (i=0;i<10000;i++)
    {
        fscanf(fptr,"%d",&array[i]);
        array[i]=array[i]*a+b;
    }
//        for (i=0;i<10000;i++)
//    {
//        printf("%lf\n",array[i]);
//    }
printf("Input an index of the array to begin fibonacci sequence: ");
scanf("%d",&index);
    farray[0]=array[index];
    farray[1]=array[index]*2;
    for(i=2;i<50;i++)
    {
        farray[i]=farray[i-2]+farray[i-1];
    }
    for(i=0;i<50;i++)
    {
        fibsum+=farray[i];
    }
    printf("The fibonacci sum is %lf\n",fibsum);

    for(i=0;i<15;i++)
    {
        carray[i]=i+1;
    }
    i=14;
    while(i>0)
    {
        fact*=carray[i];
        i--;
    }
    printf("15! is %lf\n",fact);


    double c=0,sum=0,y,t;
    for(i=0;i<10000;i++)
    {
        y=(1/((i+1)*(i+1)))-c;
        t=sum+y;
        c=(t-sum)-y;
        sum=t;
    }
    printf("The final sum of 1/n^2 is %f",sum);
}

