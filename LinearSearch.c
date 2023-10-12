#include <stdio.h>
#include <stdlib.h>
// Ashutosh Shukla (22BCE11409)
int main(){
    printf("Enter the number of values: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i= 0; i<n; i++){
        scanf("%d", &arr[i]);

    }
    printf("Enter the value to search: ");
    int s;
    scanf("%d", &s);
    int flag =0;
    for ( int i=0; i<n; i++){
        if (arr[i]==s){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("The number is found\n");
    else
        printf("Not Found\n");
}