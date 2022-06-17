#include <stdio.h>
int main()
{
    int student_marks;
    printf("GIVE A MARK'S OF A STUDENT");
    scanf("%d", &student_marks);

    if (student_marks >= 90 && student_marks <= 100)
    {
        printf("THE GRADE OF THE STUDENT IS A\n");
    }
    else if (student_marks >=80 && student_marks <90 )
    {
        printf("THE GRADE OF THE STUDENT IS B\n");
    }
    else if (student_marks >=70 && student_marks <80)
    {
        printf("THE GRADE OF THE STUDENT IS C\n");
    }
    else if (student_marks >=60 && student_marks<70)
    {
       printf("THE GRADE OF THE STUDENT IS D\n");
    }
    else if (student_marks < 60 && student_marks>0)
    {
        printf("THE GRADE OF THE STUDENT IS F\n");
    }
    
    else
    {
        printf("THE MARK'S IS INVALID\n");
    }
    
    
    
}
