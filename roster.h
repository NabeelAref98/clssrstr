//
// Created by Aref on 10/29/2022.
//

#ifndef WGU_ROSTER_H
#define WGU_ROSTER_H
#include <string>
#include "degree.h"
#include <sstream>
#include <iostream>

#include "student.h"
using namespace std;

class Roster {
private:
    unsigned char indexMax=0;
    Student *newStudent;
public:
Student classRosterArray[10];

    virtual ~Roster();


    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1,
             int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
    void remove(string studentId);
    void printAll();
    void printAverageDaysInCourse(string studentId);
    void printInvaildEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);

    Roster();
};


#endif //WGU_ROSTER_H
