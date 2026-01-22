#include <stdio.h>
 int main(){
 int n,i;
 float avg;
 int sum=0;
 int arr[5];
 int total=0;
 
 for(i=0;i<5;i++){
 scanf("%d",&arr[i]);
 total+=arr[i];
}
 avg=(float)total/5;
 for(i=0;i<5;i++){
 if(arr[i]>avg){
 sum+=arr[i];
}
}
 printf("Average array=%2.f\n",avg);
 printf("sum of elements greater than average=%d/n",sum);
 return 0;
  }
