#include<stdio.h>
void funarr(int (*ptr)[]){
    printf("%d\n",*(*ptr+2));
}
void main(){
    int arr1[]={10,20,30,40};
    
    funarr(&arr1);
    //funarr(&arr1[1]);
}