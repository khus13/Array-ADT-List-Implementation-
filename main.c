#include <stdio.h>
#include <stdbool.h>
#include "arrayADT.h"


int main(){
    
    StackArray s;
    Student stud = {25103389, {"Khugo Auditor"}, {"BSCS"}, 2, 'M'};
    
    initStack(&s);
    printf("Is the list empty? %s\n",isEmpty(s)? "Yes": "No");
    
    printf("Is the list full? %s\n", isFull(s)? "Yes": "No");
    // isFull(s);
    
    printf("\nInserting the list with a Student Profile\n");
    push(&s, stud);
    visualize(s);
    
        
    printf("\nReturning the student at the top of the List:\n");
    Student top = peek(&s,stud);
    visualize(s);
    
    printf("\nDeleting the Student Profile at the End\n");
    pop(&s);
    visualize(s);

    
}
