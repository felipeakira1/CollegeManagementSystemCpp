/*
 * ClassDTO.cpp
 *
 *  Created on: 10 de abr. de 2024
 *      Author: Felipe
 */

#include "../../include/dto/ClassDTO.h"

ClassDTO::ClassDTO(string code, string name, string syllabus, int year, int semesterNumber) : Semester(year, semesterNumber), Subject(code, name, syllabus) {}

ClassDTO::~ClassDTO() {
	// TODO Auto-generated destructor stub
}

const string &ClassDTO::getTeacherId() const {
    return teacherId;
}

void ClassDTO::setTeacherId(const string &teacherId) {
    ClassDTO::teacherId = teacherId;
}

const vector<string> &ClassDTO::getStudentsRas() const {
    return studentsRas;
}

void ClassDTO::setStudentsRas(const vector<string> &studentsRas) {
    ClassDTO::studentsRas = studentsRas;
}

const map<string, double> &ClassDTO::getStudentGrades() const {
    return studentGrades;
}

void ClassDTO::setStudentGrades(const map<string, double> &studentGrades) {
    ClassDTO::studentGrades = studentGrades;
}



