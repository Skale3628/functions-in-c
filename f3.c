//to write a fun after main 

#include<stdio.h>
void fun(int);
void main(){
    fun(10);
    fun('A');
}
void fun(int x){
    printf("Inside function int: %d\n",x);
}



