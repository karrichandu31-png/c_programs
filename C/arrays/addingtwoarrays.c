#include<stdio.h>
int main()
{
        int arr1[5]={1,2,3,4,5},arr2[5]={3,4,5,6,7};
        int s1,s2;
        s1=sizeof(arr1)/sizeof(arr1[0]);
        s2=sizeof(arr2)/sizeof(arr2[0]);
        printf("first array\n");
        for(int i=0;i<s1;i++)
        {
                printf("%d ",arr1[i]);  // printing first array
        }printf("\nsecond array\n");
        for(int i=0;i<s2;i++)
        {
                printf("%d ",arr2[i]);  // printing second array
        }printf("\n");
        int s3=s1+s2;
        int arr[s3];
        for(int i=0;i<s1;i++)
        {
                arr[i]=arr1[i];  // addd first array to 3rd
        }
        for (int i=0;i<s2;i++)
        {
                arr[s1+i]=arr2[i]; // add second to 3rd end
        }
        printf("added array\n");
        for(int i=0;i<s3;i++)
        {
                printf("%d ",arr[i]); // 3rd array
        }
}
