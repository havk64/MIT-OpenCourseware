#include <stdio.h>

int main(void)
{
    int i, j, x, y;
    i = (9 == 9);/*( ((9 / 3) == 3) && ((2 ∗ 3) == 6));*/
    j = !1;
    x = 017;
    y = 12;
    short int s;
    printf("The value of 'i' or 'true' is: %d\n", i);
    printf("The value of 'j' or 'false' is: %d\n", j);
    enum sz{S=0,L=3,XL};
    printf("Short int is: %lu\n", sizeof(s));
    printf("The result of enum is: %d\n",XL);
    printf("The value of x is: %d\n", x);
    if(x > y) {
	puts("yes""!");
	printf("%d\n", x);
    } else {
	puts("no!");
    }
    
    return 0;
}
