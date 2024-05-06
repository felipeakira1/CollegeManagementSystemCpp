/*
 * Controller.h
 *
 *  Created on: 4 de abr. de 2024
 *      Author: felip
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <string>
#include <vector>
#include <memory>
#include "../dao/StudentDAO.h"
#include "../dao/TeacherDAO.h"
#include "../dao/ClassDAO.h"
using namespace std;

class Controller final
{
private:
	unique_ptr<StudentDAO> studentDAO;
	unique_ptr<TeacherDAO> teacherDAO;
	unique_ptr<ClassDAO> classDAO;
	void launchActions(string title, vector<string> menuItens, vector<void (Controller::*)()> functions);

public:
	Controller();
	virtual ~Controller();
	void start();

	void actionToDo(void);

	void actionStudents();
	void actionInsertStudent();
	void actionGetAllStudents();
	void actionGetStudentByRa();
	// void actionUpdateStudent();
	// void actionRemoveStudent();

	void actionTeachers();
	void actionInsertTeacher();
	void actionGetAllTeachers();
	void actionGetTeacherById();
	// void actionUpdateTeacher();
	// void actionRemoveTeacher();

	void actionClasses();
	void actionInsertClass();
	void actionGetAllClasses();
	void actionGetClassByCode();
	void actionAddTeacherToClass();
    void actionAddStudentToClass();

	void actionReports();
    void reportClassesOfStudent();
    void reportStudentsOfClass();
    void reportAverageGradesOfClass();
    void reportBestGradeOfClass();
};


#endif /* CONTROLLER_H_ */
