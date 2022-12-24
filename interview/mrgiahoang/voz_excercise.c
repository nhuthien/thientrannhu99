#include <stdio.h>
#include <stdbool.h>
int x, j = 0, k = 0; //Enter X; j, k are counter variable
int arr[10];
int new_arr[10];
int temp_arr[10];
void import_array(int *arr, int *number) // 2 x pass-by-reference
{
    printf("The array have N element: N = ");
    scanf("%d",number);
    for(int i=0; i<*number; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",arr+i);
    }
}
void export_array(int *arr, int number) //
{
    printf("- - - -\n");
    for(int i=0; i<number; i++)
    {
        printf("a[%d]= %d\n",i,*(arr+i));
    }
}
bool Is_a_factor_of_N(int x, int y)
{
    if(x%y == 0) return true;
    return false; 
}
void export_the_factor(int *arr, int *number)
{
    for (int i = 0; i < *number; i++)
    {
        if(Is_a_factor_of_N(x,*(arr+i)) == true)
        {
            printf("Factor: a[%d] = %d\n",i,*(arr+i));
            new_arr[*number - j - 1] = *(arr+i); //move the factor to the end of array
            j++;
        }
        else
        {
            temp_arr[k] = *(arr+i); //if the current element isn't a factor of the *(arr+i), 
            //move it to a temp_array. We will sort temp_array when the for loop stop.
            k++;
        }
    }
}
void sort_array(int *arr, int number)
{
    int temp;
    for (int i = 0; i < number - 1; i++)
    {
        for(int m=i+1; m<number; m++)
        {
            if(temp_arr[i] > temp_arr[m]) //swap
            {
                temp = temp_arr[i];
                temp_arr[i] = temp_arr[m];
                temp_arr[m] = temp;
            }
        }
    }
    for (int i = 0; i < number; i++)
    {
        new_arr[i] = temp_arr[i];
    }
}
int main()
{
    int number;
    int *ptr = arr; //the start address of array
    printf("Enter: X = "); scanf("%d",&x);
    import_array(ptr,&number);
    export_array(ptr,number);
    export_the_factor(ptr,&number);
    sort_array(new_arr,k);
    printf("\nNew_array: \n");
    export_array(new_arr,number);
}