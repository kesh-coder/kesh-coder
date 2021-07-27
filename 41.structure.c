#include <stdio.h>
struct Student
{
    int roll_no;
    int age;
};

int main()
{
    int sum;
    struct Student stu1, stu2, stu3;
    printf("Please enter Roll_no and Age of students\n");
    scanf("%d", &stu1.roll_no);
    scanf("%d", &stu1.age);
    
    scanf("%d", &stu2.roll_no);
    scanf("%d", &stu2.age);
    
    scanf("%d", &stu3.roll_no);
    scanf("%d", &stu3.age);
    
    sum=stu1.age+stu2.age+stu3.age;
    printf("What is the average age in Class: %d", sum/3);
    return 0;
}
