//
// Created by Rick Wang on 2019/11/1.
//

#ifndef GRADUATEDEFHEADER
#define GRADUATEDEFHEADER
#include "Student.h"

class Graduate : public Student{
public:
    bool fullTime;


    //method
    double TotalMoney();
};


#endif //WEEK7_GRADUATE_H
