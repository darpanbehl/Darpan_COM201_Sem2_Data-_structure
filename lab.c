#include<stdio.h>
#include<stdlib.h>
int main(){
    int i , n , searchfor;
    int *arr;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(i=0; i<n; ++i){
        printf("ENTER THE ELEMETS OF ARRAY: arr[%d]\n",i);
        scanf(" %d",(arr+i));
    }
    for(i = 0; i<n; ++i){
        printf("showing the arrays: arr[%d]= %d\n", i,*(arr+i));
    }
    arr = realloc(arr,(n*sizeof(int)+1));
        printf("ENTER THE NEW ELEMENT OF ARRAY: arr[%d]\n",n);
        scanf(" %d",(arr+n));
    for(i= 0; i<n+1; ++i){
        printf("showing the arrays: arr[%d] = %d\n", i,*(arr+i));
    }
    printf("ENTER THE ELEMENT WHICH YOU WANT TO SEARCH FOR;)\n");
    scanf("%d",&searchfor);
    for(i=0 ; i<n+1 ; i++){
        if (arr[i]==searchfor)
        break;
    }
    if(i<n+1)
    printf("ELEMENT IS FOUND AT %d\n",i);
    else
    printf("ELEMENT NOT FOUND");
    printf("you can do this with ease :)");
    return 0;
} 
