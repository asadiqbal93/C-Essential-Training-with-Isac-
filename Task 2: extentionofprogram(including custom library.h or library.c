main.c
#include<stdio.h>
#include<stdlib.h>

#include "myLibrary.h"

#define MAX_LENGTH 21.8
#define WORK_WEEK 5

int main(void){

    function1();
    return EXIT_SUCCESS;

}
myLibrary.h //Custom library made which is used in the "main.c"

#ifndef MYLIBRARY_H_
#define MYLIBRARU_H_


void function1(void);
void function2(void);

#endif // MYLIBRARY_H_

myLibrary.c //Actual code is in this file


void function1(void){

    puts("It works :) ");
}
void function2(void){
    //This function does nothing aswell

}

