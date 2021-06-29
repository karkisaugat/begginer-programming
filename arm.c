#include <stdio.h>
#include <math.h>
int arm();
int main() 
{
    arm();
    return 0;
}
int arm()
{
    int num, Number, r, a = 0;
    printf("Enter a  integer: ");
    scanf("%d", &num);
    Number = num;
    while (Number != 0) {   
        r = Number % 10;    
        a+=r;
       Number/= 10;
    }
      a=pow(a,3);

    if (a == num)
        printf("%d is dudency number.", num);
    else
        printf("%d is not dudency number.", num);
        return a;

}


   
