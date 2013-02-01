#ifndef APPLICATION_H
#define APPLICATION_H

#include "Student.h"
#include <string>
#include <iostream>
#include <fstream>
#define APP_MAX_BUF 32
using namespace std;

class Application{
public:
	//VARIABLES---------------------	
	//------------------------------
	//FUNCTIONS---------------------
	
	Student* getApplicant(void);
	int      getApplicationNumber(void);
	string   getCourse(void);
	string   getStatus();

	bool printApp();
	Application(Student*, int, string="unknown", string="pending");
	~Application();
	//------------------------------

private:
	//VARIABLES---------------------
	Student *applicant;
	int     applicationNumber;
	string  course;
	string  relatedCourses[APP_MAX_BUF];
	string  relatedGrades[APP_MAX_BUF];
	string  applicationStatus;
	//------------------------------

};


#endif
