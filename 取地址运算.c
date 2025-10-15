#include<stdio.h>

int main()
{
      int i = 0;
    printf("%p\n",&i);
    printf("%lu\n",sizeof(&i));
    printf("%lu",sizeof(i));

    int a[10];
    printf("%p\n",&a);
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]); 
    return 0;

}
