#include<stdio.h>
// int fun(int **m,int n)
// {
    
// }
int main()
{
    int n,i,j,num=0;
    scanf("%d",&n);
    int a[n][n];
    
    for(int i=0;i<n;i++)
    {for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        
    }
    int *p=a[0];
    // fun(p,n);
    int **m=&p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*(*m+num));
           num++;
        }
        printf("\n");
    }
    return 0;
    
}