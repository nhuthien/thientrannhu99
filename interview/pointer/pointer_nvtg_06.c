//BAI TAP 01
/*
#include <stdio.h>
int *sum(int a, int b)
{
    static int sum;
    sum = a+b;
    return &sum;
}
int main()
{
    int a, b;
    printf("a = "); scanf("%d",&a);
    printf("b = "); scanf("%d",&b);
    printf("SUM = %d",*sum(a,b));
}
*/

//BAI TAP 02 & 03
/*
#include <stdio.h>
void arrayInput(int *arr, int *number)
{
    printf("Enter the quatity: number = "); scanf("%d",number);
    for(int i=0; i<*number; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",arr+i); //arr+i OR
    }
}
void arrayOutput(int *arr, int number)
{
    for(int i=0; i<number; i++)
    {
        printf("a[%d] = %d\n",i,*(arr+i));
    }
}
int *sum(int *arr, int number) //bai tap 03
{
    static int sum;
    for(int i=0; i<number; i++)
    {
        sum += *(arr+i);
    }
    return &sum;
}
int main()
{
    int number;
    int arr[30];
    arrayInput(arr,&number);
    printf("- - - \n");
    arrayOutput(arr,number);
    printf("- - - \n");
    printf("SUM = %d",*sum(arr,number)); //BAI TAP 03
}
*/
//BAI TAP 04
/*
#include <stdio.h>
#include <string.h>

int count(char *pt)
{
    int count = 0, i = 0;
    while(*(pt+i) != '\0') // '\0' <=> null character
    {
        count++;
        i++;
        printf("count = %d\n",count);
    }
    return count;
}

int main()
{
    char str[30];
    char *pt;
    pt = str;
    printf("Enter a string: "); gets(str); //gets instead of scanf
    printf("Length of string: %d",count(pt));
}
*/

//BAI TAP 05
/*
#include <stdio.h>
int main()
{
    int arr[6] = {1,3,5,7,9,11};
    int n;
    int *pt;
    pt = arr;
    for(int i=5; i>=0; i--)
    {
        printf("%d\n",*(pt+i));
    }
}
*/

//BAI TAP 06
#include <stdio.h>
void arrayInput(int *arr, int *number)
{
    printf("Enter the quatity: number = "); scanf("%d",number);
    for(int i=0; i<*number; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",arr+i); //arr+i OR
    }
}
void arrayOutput(int *arr, int number)
{
    for(int i=0; i<number; i++)
    {
        printf("a[%d] = %d\n",i,*(arr+i));
    }
}
void arraySort(int *arr, int number)
{
    int temp;
    for(int i=0; i<number-1; i++)
    {
        for(int j=i+1; j<number; j++)
        {
            if(*(arr+i) > *(arr+j)) //swap
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;                
            }
        }
    }
}
int main()
{
    int number;
    int arr[30];
    arrayInput(arr,&number);
    printf("- - before sorting - - \n");
    arrayOutput(arr,number);
    arraySort(arr,number);
    printf("- - after sorting - - \n");
    arrayOutput(arr,number);
}