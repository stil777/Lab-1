#pragma once

#include <string>

class Student
{
public:
	Student(int default_score)
        {
            for (int i = 0; i < 5; ++i) {
                scores[i] = default_score;
            }
        }
	~Student(void)
	{ 
		printf("The work is over, memory cleaned succesfuly.");
	}
	void put_name(std::string); //Установка имени студента
        std::string get_name(); //Получение имени студента
        void put_last_name(std::string); //Установка фамилии студента
        std::string get_last_name(); //Получение фамилии студента
        void put_scores(int []); //Установка промежуточных оценок
        void put_average_ball(float); //Установка среднего балла
        float get_average_ball(); //Получение среднего балла
private:
        int scores[5]; // Промежуточные оценки
        float average_ball; // Средний балл
        std::string name; // Имя
        std::string last_name; // Фамилия
};
