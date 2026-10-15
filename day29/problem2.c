//Second-Largest Distinct Element


#include <stdio.h>
int lara(int arr[],int n)
{
    int lar=0;
    for(int i=0;i<n;i++)
        {
                    if((arr[lar]<arr[i]))
                    {
                        lar=i;
                    }
                
        }
    return lar;
}
int seclara(int arr[],int n,int z)
{
    int slar=-1;
    for(int i=0;i<n;i++)
        {   
                    if(arr[i]>=arr[z])
                    {
                        continue;
                    }
                    else if((slar==-1)||(arr[slar]<arr[i]))
                    {
                        slar=i;
                    }
        }
    return slar;

}
int main() 
{
    int n;
    printf("enter no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    int z=lara(arr,n);
    int y=seclara(arr,n,z);
    if(y!=-1)
    {
            printf("second largest no %d\n",arr[y]);
    }
    else
        {
    printf("no second largest no");
        }
    return 0;
}
