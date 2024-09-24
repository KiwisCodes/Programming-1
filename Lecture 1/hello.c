#include <stdio.h>
#include <hello.h> //include/hello.h in case the hello.h is in the include folder
//or ../hello.h somewhere outside
void hellostudent();
int main() {
    printf("Hello, World!\n");
    hellostudent();
    return 0;
}