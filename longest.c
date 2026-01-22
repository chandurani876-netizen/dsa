
#include <stdio.h>
int main(){
    int a[20],n,i;
    int count=1,max=1;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++){
        if (a[i]>=a[i-1]){
            count++;
        }else{
            count=1;
        }
        if (count>max){
            max=count;
        }
    }
    printf("Length of longest sorted subarray=%d",max);
    return 0;
}