#pragma once

class Student
{
public:
	Student(void);
	~Student(void);
	void put_name(std::string); //Установка имени студента
        std::string get_name(); //Получение имени студента
        void put_last_name(std::string); //Установка фамилии студента
        std::string get_last_name(); //Получение фамилии студента
        void put_scores(int []); //Установка промежуточных оценок
        void set_average_ball(float); //Установка среднего балла
        float get_average_ball(); //Получение среднего балла
};
