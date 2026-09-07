#include <stdio.h>
#include <stdbool.h>
#include "arrayADT.h"

void initStack(StackArray *s){
    s->top = 0;
}

bool isEmpty(StackArray s){
    
    return (s.top == 0);
}

bool isFull(StackArray s){
    return(s.top == MAX - 1);
}

void visualize(StackArray s){
  if((isEmpty(s)) || (isFull(s))){
      return;
  }else{
      printf("These are the recent Student Profiles:\n");
      for(int i = 0; i < s.top; ++i){
          printf("Id : %d\n", s.student[i].ID);
          printf("Name : %s\n", s.student[i].name);
          printf("Program : %s\n", s.student[i].program);
          printf("Year : %d\n", s.student[i].year);
          printf("Sex : %c\n", s.student[i].sex);
      }
  }
}


bool push(StackArray *s, Student stud){
    
    if(isFull(*s)){
      return false;
    }else{
        s->student[s->top++] = stud;
        return true;
    }
}

bool pop(StackArray *s){
    if(isEmpty(*s)){
        return false;
    }else{
        s->top--;
    }
}


Student peek(StackArray *s, Student stud){
    // if(isEmpty(s)){
    //     return;
    // }
    Student dummy = {0, {"XXXX"}, {"XXXX"}, 0, 'X'};
    
    return(isEmpty(*s))? dummy: s->student[s->top];
}