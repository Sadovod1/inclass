#include <stdio.h>
int main (void){
printf("Enter number of n+1 integers: \n")
int n;
scanf("%d", &n);
int c = 0;
int previous = 0;
int entered = 0;
int largest = 0;
int second = 0;
while(c < n){
if (previous == largest)
{
second = previous;
}
previous = entered;
printf("Enter an integer: ")
scanf("%d", &entered);
if(entered > previous && largest == 0)
{
largest = entered
}
if(entered > largest)
{
largest = entered
}

}
printf("largest = %d\n", largest);
printf("2nd largest = %d\n", second);
}
