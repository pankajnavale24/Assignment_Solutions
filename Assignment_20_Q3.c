#include<stdio.h>
void sort(int *ptr,int size);
//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
int main()
{
   int a[]={1,6,38,65,14,05,66,7,8,9},i;
   sort(a,10);
   for(i=0;i<10;i++)
        scanf("%d",a[i]);
   return 0;
}
void sort(int *ptr,int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=1;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
