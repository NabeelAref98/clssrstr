//
// Created by Aref on 10/29/2022.
//

#include "student.h"
#include <stdlib.h>
#include <stdio.h>

string Student::getStudentId() const {
    return studentId;
}

void Student::setStudentId(string studentId) {
    this->studentId = studentId;
}

const string Student::getFirstName() const {
    return firstName;
}

Student::Student(const string &studentId, const string &firstName, const string &lastName, const string &emailAddress,
                 unsigned char age, unsigned char daysLeft1,unsigned  char daysLeft2, unsigned  char daysLeft3, DegreeProgram degreeProgram) : studentId(studentId),
                                                                                            firstName(firstName),
                                                                                            lastName(lastName),
                                                                                            emailAddress(emailAddress),
                                                                                            age(age),

                                                                                            degreeProgram(
                                                                                                    degreeProgram) {
    daysLeft = new unsigned  char [3]{daysLeft1,daysLeft2,daysLeft3};
}

Student::~Student() {
    free(daysLeft);
}
Student::Student(){}
void Student::setFirstName(const string firstName) {
    this->firstName = firstName;
}

const string Student::getLastName() const {
    return lastName;
}

void Student::setLastName(const string lastName) {
    this->lastName = lastName;
}

const string Student::getEmailAddress() const {
    return emailAddress;
}

void Student::setEmailAddress(const string emailAddress) {
    this->emailAddress = emailAddress;
}

unsigned char Student::getAge() const {
    return age;
}

void Student::setAge(unsigned char age) {
    this->age = age;
}

const unsigned char *Student::getDaysLeft() const {
    return daysLeft;
}
void Student::print()
{
    string degrees[]  {
            "SECURITY",
            "NETWORK",
            "SOFTWARE"
    };
    printf("%s\t %s%s %s%s %s%s %d\t %d\t %d\t %d\t %s\n",studentId.c_str(),firstName.c_str(),(firstName.length()>6)?"\t":"\t\t",lastName.c_str(),(lastName.length()>6)?"\t":"\t\t",emailAddress.c_str(),(emailAddress.length()>19)?"\t":"\t\t",age,daysLeft[0],daysLeft[1],daysLeft[2],degrees[(int)degreeProgram].c_str());
}

DegreeProgram Student::getDegreeProgram() const {
    return degreeProgram;
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}
