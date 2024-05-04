/*
 * ClassDTO.cpp
 *
 *  Created on: 10 de abr. de 2024
 *      Author: Felipe
 */

#include "../../include/dto/ClassDTO.h"

ClassDTO::ClassDTO(const string& code, const string& name, const string& syllabus, int year, int semesterNumber) : Semester(year, semesterNumber), Subject(code, name, syllabus) {}

ClassDTO::~ClassDTO() {
	// TODO Auto-generated destructor stub
}

const string &ClassDTO::getTeacherId() const {
    return teacherId;
}

void ClassDTO::setTeacherId(const string &teacherId) {
    ClassDTO::teacherId = teacherId;
}

const map<string, double> &ClassDTO::getStudentGrades() const {
    return studentGrades;
}

//void ClassDTO::setStudentGrades(const map<shared_ptr<StudentDTO>, double> &studentGrade) {
//    ClassDTO::studentGrades = studentGrade;
//}

void ClassDTO::addStudent(const string &studentRa, double grade)
{
    studentGrades.insert(make_pair(studentRa, grade));
}

ostream& operator<<(ostream& os, const shared_ptr<ClassDTO> &classDTO)
{
    os << "[Codigo: " << classDTO->getCode()
        << ", Nome: " << classDTO->getName()
        << ", Ementa: " << classDTO->getSyllabus()
        << ", Ano: " << classDTO->getYear()
        << ", Semestre: " << classDTO->getSemesterNumber()
        << ", Professor: " << classDTO->getSemesterNumber()
        << "]";
    return os;
}