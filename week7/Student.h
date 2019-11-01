//
// Created by Rick Wang on 2019/11/1.
//

#ifndef STUDENTDEFHEADER
#define STUDENTDEFHEADER

#include <iostream>

class Student {
private:
    double libFine;
public:
    std::string name;

    double tuitionFee;


    //constructor
    Student();
    explicit Student(std::string name);//explicit, avoid implicit conversions
    Student(std::string name, double fine, double fee);

    //method
    virtual double TotalMoney();
    void SetLibFine(double fine);
    double GetLibFine();
};

#endif //WEEK7_STUDENT_H
