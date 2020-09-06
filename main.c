#include <stdio.h>
#include <stdlib.h>

int main()

{
   int a,b;
  char op;
  printf("Enter Operator(+,-,*,/)");
  scanf("%c",&op);
printf("first  number:");
  scanf("%d",&a);

  printf("second  number:");
  scanf("%d",&b);



  /**switch(op)

  {
  case '+' : printf("Result : %d ",a+b);break;
  case '-' : printf("Result : %d ",a-b);break;
  case '*' : printf("Result : %d ",a*b);break;
  case '/' : printf("Result : %d ",a/b);break;
  default  : printf("Invalid operator....");


}*/

//another way:

if(op=='+'){
        printf("Result : %d ",a+b);
}
if(op=='-'){
        printf("Result : %d ",a-b);
}
if(op=='*'){
        printf("Result : %d ",a*b);
}
if(op=='/'){
        printf("Result : %d ",a/b);

}



}
