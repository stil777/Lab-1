#include "StdAfx.h"
#include "Lab1_2.h"
#include <string>

void Students::set_name(std::string student_name)
{
    Students::name = student_name;
}

std::string Students::get_name()
{
    return Students::name;
}
