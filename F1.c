#include<stdio.h>

void fun(int *x){
    printf("%p\n",x);
}
void main(){
    /*fun('A');
    fun(10);
    fun(20.5f);
    fun(35.50);
*/

    int a=10;
    int *ptr=a;
    fun('a');
}

