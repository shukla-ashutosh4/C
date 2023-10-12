#include <stdio.h>
#include <stdlib.h>
// Ashutosh Shukla (22BCE11409)
int main(){
    int n, s, temp;
    printf("Enter the number of values:");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number to be searched: ");
    scanf("%d", &s);
    // Now using bubble sort to sort the array
    for (int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if (arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Now using binary search algorithm
    int mid, first, last;
    first = 0;
    last = n-1;
    mid = (first+last)/2;
    while(arr[mid]!=s && first < last){
        if (arr[mid]>s)
           last = mid - 1;
        if (arr[mid]<s)
           first = mid+1;
        mid = (first+last)/2;    
    }
    if (arr[mid]==s)
       printf("The number is found\n");
    else
        printf("The number was not found!\n");
}