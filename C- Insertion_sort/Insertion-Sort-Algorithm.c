#include<stdio.h>
void origial_array(int arr[], int n);
void insertion_sort(int arr[], int n);
int main()
{
    int arr[]={12,11,13,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("original Array:\n");
    origial_array(arr,n);

    ///for sorted array
    printf("Sorted Array:\n");
    insertion_sort(arr,n);
}
void origial_array(int arr[], int n)
{
   for(int i=0 ; i<n ;i++)
   {
       printf("%d\t",arr[i]);
   }
   printf("\n");
}

void insertion_sort(int arr[], int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;

      }
      arr[j+1]= key;
      printf("%d\t",arr[i]);
    }

}
