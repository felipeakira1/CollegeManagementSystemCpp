/*
 * ClassDTO.h
 *
 *  Created on: 10 de abr. de 2024
 *      Author: Felipe
 */

#ifndef CLASSDTO_H_
#define CLASSDTO_H_

#include <map>
#include <string>
#include <vector>
#include <memory>
#include <iostream>

#include "Semester.h"
#include "Subject.h"
#include "StudentDTO.h"

using namespace std;

class ClassDTO : public Semester, public Subject{
public:
	ClassDTO(const string& code, const string& name, const string& syllabus, int year, int semesterNumber);
	virtual ~ClassDTO();

private:
	string teacherId;
    map<string, double> studentGrades;

public:
    const string &getTeacherId() const;
    void setTeacherId(const string &teacherId);
    const map<string, double> &getStudentGrades() const;
//    void setStudentGrades(const map<shared_ptr<StudentDTO>, double> &studentGrade);
    void addStudent(const string &studentRa, double grade);
    friend ostream& operator<<(ostream& os, const shared_ptr<ClassDTO> &classDto);
};

#endif
