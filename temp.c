#include<stdio.h>
int main(){

	int a[4]={5,6,7,8};
char ca[3]={'a','b','c'};
printf("this is a[0]:%d\n",a[0]);
printf("this is ? %d\n",&a[0]);
printf("this is ? %d\n",&a[1]);
printf("this is ? %d\n",&ca[0]);
printf("this is ? %d\n",&ca[1]);

printf("this is ? %d\n",&a);
printf("this is ? %d\n",(a+1));
printf("this is ? %d\n",&a+1);
printf("this is ? %d\n",a);
printf("this is ? %d\n",*a+1);

return 0;
}
