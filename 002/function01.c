#include <stdio.h>

//void 함수
void myPrint(){
    printf("Hello Print!!!\n");
}

void add1(){
    int a = 100;
    int b = 200;
    printf("%d\n", a+b);
}

//int 함수
int add2(){
    int a = 100;
    int b = 200;
    return a+b;
}

int add3(int a, int b){
    return a+b;
}

int main(){
    myPrint();
    add1();
    int result = add2();
    printf("%d\n", result);
    printf("%d\n", add3(100, 200));
    return 0;
}
