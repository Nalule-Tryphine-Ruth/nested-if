#include <stdio.h>
#include <stdlib.h>
int main(){
/* AND - &&
OR - ||
*/
if (80 >= 10 && 7 != 8)
{
//block
//printf displays data on a screen
printf("this is true. Block A\n");
} else
{
//Block B
printf("This is false. Block B\n"); 
}

//OR
if (100 >=1000 || 'y' > 'n')
{
printf("this is true.\n");
}else
{
printf("this is false\n");
}

//Nested If
if (5 == 5)
{ printf("5 is equal to 5\n");
if (50 < 0)
{
printf("50 is less 0 \n"); 
}else
{
printf("50 is not less than 0\n");
}
}else
{
printf("5 is not equal to 5\n");
}

//ELSE IF
if (6 == 6)
{
// block a will be run if the condition is true 
//if not it goes to the next condition
printf("6 is equal to 6");

} else if (4.90 < 4.99)

} else if (4.99 < 4.92)
{
// block b will be run if the condition is true 
//if not it goes to the next condition
printf("4.90 is less than 4.99");
}else
{
// block d will be run if all the above condition are false
printf("4.90 is not less than 4.99");
}
return 0;
