#include "StdAfx.h"
#include "Lab1_2.h"
#include <string>

void Students::put_name(std::string student_name)
{
    Students::name = student_name;
}

std::string Students::get_name()
{
    return Students::name;
}

void Students::put_last_name(std::string student_last_name)
{
    Students::last_name = student_last_name;
}

std::string Students::get_last_name()
{
    return Students::last_name;
}

void Students::set_scores(int scores[])
{
    for (int i = 0; i < 5; ++i) {
        Students::scores[i] = scores[i];
    }
}

void Students::set_average_ball(float ball)
{
    Students::average_ball = ball;
}

float Students::get_average_ball()
{
    return Students::average_ball;
}
