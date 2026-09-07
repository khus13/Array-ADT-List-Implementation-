#include <stdio.h>
#include <stdbool.h>

#ifndef ARRAYADT_H
#define ARRAYADT_H
#define MAX 10

typedef struct {
    int ID;
    char name[20];
    char program[20];
    int year;
    char sex;
}Student;

typedef struct{
    Student student[MAX];
    int top;
}StackArray;

bool push(StackArray *s, Student stud); //inserting at the end
bool pop(StackArray *s); // Removing at the end
Student peek(StackArray *s, Student stud);
void initStack(StackArray *s);
bool isEmpty(StackArray s);
bool isFull(StackArray s);
void visualize(StackArray s);



#endif