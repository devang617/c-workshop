#include<stdio.h>
int main()
{float num1,num2;
 char Operator;
 printf("Program to perform mathematical operation.\n Enter the number 1 and number2 respectively.");
 scanf("%f %f ",&num1,&num2);
 printf("Enter operator to be performed +,-,*,/");
 scanf("%c",&Operator);
 switch(Operator)
 {case'+':
  {printf("Addition is  %f",num1+num2);
   break;
  }
  case'-':
  {printf("Subtraction is %f",num1-num2);
   break;
  }
  case'*':
  {printf("product is %f",num1*num2);
  break;
  }
  case'/':
  {printf("Division is %f",num1/num2);
   break;
  }
 default :
 {printf("Invalid operator ");
 }
}
return 0;
}
 
