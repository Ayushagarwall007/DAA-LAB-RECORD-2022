//I. Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not.
//Also, find total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
#include <stdio.h>
int main()
{
    int t,m=0,n,c,i;
    printf("enter the target:");
    scanf("%d",&t);
    while(m<=t){
        c=0;
        printf("enter the size of array:");
        scanf("%d",&n);
        int arr[n];
        printf("enter the array elements:");
        for( i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int key;
        printf("enter the key to search:");
        scanf("%d",&key);
         for( i=0;i<n;i++){
             c++;
            if(key==arr[i]){
                printf("Key found\n");
                printf("Comparisions : %d",c);
                break;
            }
         }
         if(i==n){
            printf("Key not found\n");
            printf("Comparisions : %d",c);
         }

        m++;
        printf("\n");
    }
}
