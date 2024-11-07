//micah li
//used to practice structs

#include <stdio.h>
#include <stdbool.h>


typedef struct { 
    int age;
    bool student;
    double savings;
} person_t;

void person_status(person_t *our_person);

int main(){

    person_t lmi;
    lmi.age = 19;
    lmi.student = true;
    lmi.savings = 4507.19;
    person_status(&lmi);
    person_t jli = {22, false, 377.10};
    person_status(&jli);
    
    return 0;
}


void person_status(person_t *our_person) {
    //pointer->attribute
    //shortcut of: (*pointer).attribute
    printf("\nThey are %d years old\n", our_person->age);
    if(our_person->student)
    printf("They are a student too!\n");
    else
    printf("They are NOT a student!\n");
    printf("Their savings are a measily: %0.2lf\n\n", our_person->savings);

}

