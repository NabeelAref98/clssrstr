//
// Created by Aref on 10/29/2022.
//

#include "roster.h"
using namespace std;
void Roster::add(string studentID, string firstName, string lastName, string
emailAddress, int age, int daysInCoursel, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {

   newStudent=  new Student( studentID, firstName, lastName, emailAddress,(unsigned char )age, (unsigned char)daysInCoursel, (unsigned char)daysInCourse2, (unsigned char)daysInCourse3,  degreeprogram);

    classRosterArray[indexMax] = *newStudent;
    indexMax++;
}

void Roster::remove(string studentId) {
    for (int i = 0; i < indexMax;i++) {
        if (classRosterArray[i].getStudentId() =="DELETED") continue;

        if(classRosterArray[i].getStudentId() == studentId)
        {
            newStudent = new Student();
            classRosterArray[i] = *newStudent;
            classRosterArray[i].setStudentId("DELETED");
            return;
        }
    }
    printf("[X] ERROR: Student was not found.");

}

void Roster::printAll() {
    for (int i = 0; i < indexMax;i++) {
        if (classRosterArray[i].getStudentId() =="DELETED") continue;
            classRosterArray[i].print();

    }
}

void Roster::printAverageDaysInCourse(string studentId) {
    for (int i = 0; i < indexMax;i++) {
        if (classRosterArray[i].getStudentId() =="DELETED") continue;
        if(classRosterArray[i].getStudentId() == studentId)
        {


            unsigned  char Value = (classRosterArray[i].getDaysLeft()[0] +classRosterArray[i].getDaysLeft()[1] +classRosterArray[i].getDaysLeft()[02])/3;
            printf("The Average days for %s is : %d\n",classRosterArray[i].getFirstName().c_str(),Value);
            return;
        }
    }
}

void Roster::printInvaildEmails() {
    printf("The following are all the invaild Email addresses!\n");
    for (int i = 0; i < indexMax;i++) {
        if (classRosterArray[i].getStudentId() =="DELETED") continue;
        if(classRosterArray[i].getEmailAddress().find("@") == string::npos
               || classRosterArray[i].getEmailAddress().find(".") == string::npos
               || classRosterArray[i].getEmailAddress().find(" ") != string::npos
               )
        {
            printf("%s\n",classRosterArray[i].getEmailAddress().c_str());
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < indexMax;i++) {
        if(classRosterArray[i].getStudentId() !="DELETED" && classRosterArray[i].getDegreeProgram() ==degreeProgram )
        {
            classRosterArray[i].print();
        }
    }
}

Roster::~Roster() {
    for (int i = 0; i < indexMax; ++i)
        delete (&classRosterArray[indexMax]);

    free(classRosterArray);

}

Roster::Roster() {
    indexMax = 0;
}
