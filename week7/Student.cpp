//
// Created by Rick Wang on 2019/11/1.
//

#include "Student.h"


//constructor

Student::Student()
{
    this->name = "Default";
    this->libFine = 0.0;
    this->tuitionFee = 0.0;
}

Student::Student(std::string name)
{
    this->name = name;
    this->libFine = 0.0;
    this->tuitionFee = 0.0;
}

Student::Student(std::string name, double fine, double fee)
{
    this->name = name;
    this->libFine = fine;
    this->tuitionFee = tuitionFee;
}

//method
double Student::TotalMoney()
{
    return libFine+tuitionFee;
}

void Student::SetLibFine(double fine)
{
    if(fine>=0.0)
        this->libFine = fine;
    else
        std::cout<<"Error: the fine is negative"<<std::endl;
}

double Student::GetLibFine()
{
    return this->libFine;
}

