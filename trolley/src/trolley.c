/* File: trolley.c */
#include <stdio.h>

int main() {

//da variables 
int left;
int right;
//we're looping it infinetely till it breaks by EOF 
while (1)
{
//input how many dead by going left
//if its not an interger, then loop breaks due to EOF
printf("Please enter the cost of going left:\n");
if (scanf("%d",&left) !=1)
{
    break;
}

//input how many dead by going right 
//if its not an interger, then loop breaks due to EOF
printf("Please enter the cost of going right:\n");
if (scanf("%d",&right)!=1)
{
    break;
}

//if right is less dead go right, else go left
//since we dont care in case of equal dead, you might as well go left, no ethics lost :)

if (right < left)
{
    printf("Go right!\n");
} else {
    printf("Go left!\n ");
}

}




return 0;    
}
