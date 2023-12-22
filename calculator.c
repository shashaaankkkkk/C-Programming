#include <stdio.h>
int main ()
{
    int n,m,b;
    printf("Choose your integers\n");
    scanf("%d%d",&m,&b);
    printf("Which function would you want to use?\n1. Multiplication\n2. Division\n3 Addition\n4. Substraction\n");
    scanf("%d",&n);
    if (n==1)
    {
      printf("m*b=%d", m*b);   
    }
    else if (n==2){
        printf("m/b=%d", m/b);
    }
    else if (n==3)
    {
        printf("m+b=%d", m+b);
    }
    else if (n==4){
        printf("m-b=%d", m-b);
        printf("\n");
    }
    else{
      printf("Wrong Choice ! Enter correct option\n");
    }
return 0;
}
