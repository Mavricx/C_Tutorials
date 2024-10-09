#include <stdio.h>
int main()
{
    int isSunday = 0;
    int isSnowing = 1;
    int isMonday = 1;
    int numm=67;
    printf("Is it sunday and is it snowing : %d\n", isSunday && isSnowing);
    printf("Is it sunday or is it snowing : %d\n", isMonday || isSnowing);
    printf("Is the number is grater than 9 and small than 100 :%d\n",numm>9 && numm<100);
    return 0;
}