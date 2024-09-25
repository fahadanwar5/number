#include <stdio.h>
int main(){

int x,y,temp;
printf("Enter the first number:\n");
scanf("%d",&x);
printf("Enter the second the number:\n");
scanf("%d",&y);

temp = x;
x = y;
y = temp;

printf("After swap x = %d\n",x);
printf("After swap y = %d\n",y);
return 0;
}
