#include <stdio.h>
int main()
{
    char x[4];
    char temp;
    char *pt = x;
    int n, N;
    printf("So phan tu: N = "); scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        printf("x[%d] = ",i); scanf("%d",&n);
        *(pt+i) = n;
    }
    printf("\n - - - - \n");
    for(int i=0; i<N; i++)
    {
        printf("x[%d] = %d\n",i,x[i]);
    }
    //
    for(int i=0; i<N-1; i++) // sort
    {
        for(int j=i+1; j<N; j++) //
        {
            if(*(pt+i) > *(pt+j))
            {
                temp = *(pt+i);
                *(pt+i) = *(pt+j);
                *(pt+j) = temp;
            }
        }
    }
    printf("After sort:\n");
    for(int i=0; i<N; i++)
    {
        printf("x[%d] = %d\n",i,*(pt+i));
    }
    
}