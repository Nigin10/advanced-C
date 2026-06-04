#include<stdio.h>
int rearrange(int *arra,int size)
{
    int temp[size];
    int *p=arra;
    int *t=temp;
    int i;
    for(i=0;i<size;i++)
    {
        if((*p%2)==0)
        {
            *t=*p;
            t++;
        }
        p++;
    }
    p=arra;

    for(i=0;i<size;i++)
    {
        if((*p%2)!=0)
        {
            *t=*p;
            t++;
        }
        p++;
    }
 p=arra;
 t=temp;
 for(i=0;i<size;i++)
 {
    *p=*t;
    p++;
    t++;

 }

}
int main()
{
    int a;
    printf("ente rthe array size");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    rearrange(arr,a);
    for(int i=0;i<a;i++)
    {
        printf("ouptut: %d\n",arr[i]);

    }
}
