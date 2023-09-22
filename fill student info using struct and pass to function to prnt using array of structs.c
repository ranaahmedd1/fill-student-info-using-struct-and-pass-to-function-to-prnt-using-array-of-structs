#include <stdio.h>
typedef struct student{
 char *name;
  int age;
  int degree;
  int section;
}student;

void print(student *p){
    for(int i=0;i<5;i++)
    { printf("student:%d\n",i);
       printf("name:%s\n", p->name);
        printf("age:%d\n", p->age);
         printf("degree:%d\n", p->degree);
          printf("section:%d\n", p->section);
          printf("\n");
          p++;

    }


}
void main(){
student stud[5];
stud[0].name="amin";
stud[0].age=23;
stud[0].degree=98;
stud[0].section=2;


stud[1].name="rana";
stud[1].age=15;
stud[1].degree=100;
stud[1].section=34;


stud[2].name="ahmed";
stud[2].age=55;
stud[2].degree=94;
stud[2].section=1;


stud[3].name="mahmoud";
stud[3].age=75;
stud[3].degree=45;
stud[3].section=3;

stud[4].name="ebrahiem";
stud[4].age=34;
stud[4].degree=95;
stud[4].section=1;


printf(stud);




}
