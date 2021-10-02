#include <stdio.h>
int main(){

  int sum = 0;
  int n;

  printf("enter any number : ");
  scanf("%d",&n);

  for (int i = 0;i < n;i++){
    sum += i;
  }

  printf("the sum is : %d",sum);
  return 0;
}
