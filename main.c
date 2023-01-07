#include <stdio.h>
#include <stdlib.h>

int main()
{
//Operations:

//    int x =5;
//    int y =3;
//
//    printf("The Sum is : %d", x+y);
//    printf("The Difference is : %d", x-y);
//    printf("The Multiply is : %d", x*y);
//    printf("The Division is : %d", x/y);
//    return 0;

//Check :
int x;
scanf("%d",&x);
if(x>=0&&x<=10){
    printf("the number between 0 and 10");
}
else if (x>10 && x<=100){
     printf("the number between 10 and 100");
}
else if (x>100&&x<=500){
     printf("the number between 100 and 500");
}
else if (x>500&&x<=1000){
     printf("the number between 500 and 1000");
}
else{
    printf("ERROR");
}
}
