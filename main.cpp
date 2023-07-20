#include "student.h"
#include "roster.h"


using namespace std;


int main() {
    printf("SCRIPTING AND PROGRAMMING - APPLICATIONS – C867 \n");
    printf("C++ WAS USED TO MAKE THIS PROJECT.\n");
    printf("010199591, Nabeel Aref\n");
    Roster classRoster = Roster() ;
    const string studentData[]
            {"A1, John, Smith,John1989@gmail.com,20,30,35,40,SECURITY",
             "A2, Suzan, Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
             "A3, Jack, Napoli,The_lawyer 99yahoo.com,19,20,40,33,SOFTWARE",
             "A4, Erin, Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
             "A5, Nabeel, Aref,naref3@wgu.edu,24,37,26,42,SOFTWARE"
            };
    printf("All the Students\n");
    for (int i = 0; i < 5; ++i) {
        stringstream studentDataLine(studentData[i]);
        string id;
        getline(studentDataLine, id, ',');
        string firstName;
        getline(studentDataLine, firstName, ',');

        string lastName;
        getline(studentDataLine, lastName, ',');

        string email;
        getline(studentDataLine, email, ',');

        string age;
        getline(studentDataLine, age, ',');

        string day1;
        getline(studentDataLine, day1, ',');

        string day2;
        getline(studentDataLine, day2, ',');

        string day3;
        getline(studentDataLine, day3, ',');

        string program;
        getline(studentDataLine, program, ',');
        DegreeProgram degreeProgram = NETWORK;
        if (program == "SOFTWARE") degreeProgram = SOFTWARE;
        if (program == "SECURITY") degreeProgram = SECURITY;
        classRoster.add(id, firstName, lastName, email, stoi(age), stoi(day1), stoi(day2), stoi(day3), degreeProgram);
    }
    classRoster.printAll();
    classRoster.printInvaildEmails();
    printf("All the average days:\n");
    for (int i = 0; i < 5; ++i) {
       classRoster.printAverageDaysInCourse( classRoster.classRosterArray[i].getStudentId());
    }

    printf("Degrees that are Sofware:\n");
    classRoster.printByDegreeProgram(SOFTWARE);

    printf("Removing A3 and printing all the records:\n");

    classRoster.remove("A3");
    classRoster.printAll();

    printf("Trying to remove A3 again:\n");

    classRoster.remove("A3");

    return 0;
}
