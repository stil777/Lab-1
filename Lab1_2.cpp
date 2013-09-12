#include "StdAfx.h"
#include "Lab1_2.h"
#include <string>
#include <conio.h>

void Student::put_name(std::string student_name)
{
    Student::name = student_name;
}

std::string Student::get_name()
{
    return Student::name;
}

void Student::put_last_name(std::string student_last_name)
{
    Student::last_name = student_last_name;
}

std::string Student::get_last_name()
{
    return Student::last_name;
}

void Student::put_scores(int scores[])
{
    for (int i = 0; i < 5; ++i) {
        Student::scores[i] = scores[i];
    }
}

void Student::put_average_ball(float ball)
{
    Student::average_ball = ball;
}

float Student::get_average_ball()
{
    return Student::average_ball;
}

int main()
{
    Student *student1 = new Student(0);
    delete student1;

	getch();
    return 0;
}
