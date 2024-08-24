#include<stdio.h>
using namespace std;

int fib(int a){
        if(a==1 || a==2){
                return 1;
        }
        int num;
        num = fib(a-1) + fib(a-2);
        return num;
}

int main()
{
        int index = 0;
        scanf("%d", &index);
        index = fib(index);
        printf("%d", index);
return 0;
}