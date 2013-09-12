#include "StdAfx.h"
#include "Lab1_2.h"
#include <string>
#include <conio.h>
#include <iostream>

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
	std::string name;
    std::string last_name;
	printf("Name: ");
    getline (std::cin, name);
    std::cout << "Last name: ";
    getline(std::cin, last_name);
	student1->put_name(name);
    student1->put_last_name(last_name);
	int scores[5];
	int sum = 0;
	for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i+1 << ": ";
        std::cin >> scores[i];
		sum += scores[i];
	}
	student1->put_scores(scores);
	float average_ball = sum / 5.0;
    student1->put_average_ball(average_ball);
    std::cout << "Average ball for " << student1->get_name() << " "
         << student1->get_last_name() << " is "
         << student1->get_average_ball() << std::endl;
	delete student1;
	getch();
    return 0;
}
