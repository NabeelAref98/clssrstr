//
// Created by Aref on 10/29/2022.
//

#ifndef WGU_STUDENT_H
#define WGU_STUDENT_H
#include <string>
#include "degree.h"

using namespace std;

class Student {
public:
    Student();

    Student(const string &studentId, const string &firstName, const string &lastName, const string &emailAddress,
            unsigned char age, unsigned char daysLeft1,unsigned  char daysLeft2, unsigned  char daysLeft3, DegreeProgram degreeProgram);

    string getStudentId() const;

    void setStudentId(string studentId);

    const string getFirstName() const;

    void setFirstName(const string firstName);

    const string getLastName() const;

    void setLastName(const string lastName);

    const string getEmailAddress() const;

    void setEmailAddress(const string emailAddress);

    unsigned char getAge() const;

    void setAge(unsigned char age);

    const unsigned char *getDaysLeft() const;

    virtual ~Student();

    void print();

    DegreeProgram getDegreeProgram() const;

    void setDegreeProgram(DegreeProgram degreeProgram);

private:
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    unsigned char age;
    unsigned char *daysLeft;
    DegreeProgram degreeProgram;



};


#endif //WGU_STUDENT_H
