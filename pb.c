#include <stdio.h>
void greet();
int main()
{
    void (*tp)(void) = greet;
    tp();
    return 0;
}
void greet()
{
    printf("Hello World\n");
}   

