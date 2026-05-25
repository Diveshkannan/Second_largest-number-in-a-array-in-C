#include <stdio.h>

int main(void)
{
    int arr[]={1,2,5,4,3};
    int max=0;
    int second_largest=0;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++)
    {
        if(arr[i]<=0)
        {
            printf("Only positive numbers");
            return 1;
        }
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    int temp=max;
    int copy[length];
    for(int j=0;j<length;j++)
    {
        copy[j]=max-arr[j];
    }
    for(int g=0;g<length;g++)
    {
        if (copy[g]!=0 && temp>copy[g])
        {
            temp=copy[g];
            second_largest=g;
        }
    }
    printf("Second largest: %i\n",arr[second_largest]);
    return 0;







}


