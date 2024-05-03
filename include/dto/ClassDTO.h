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

#include "Semester.h"
#include "Subject.h"

using namespace std;

class ClassDTO : public Semester, public Subject{
public:
	ClassDTO(string code, string name, string syllabus, int year, int semesterNumber);
	virtual ~ClassDTO();

private:
	string teacherId;
	vector<string> studentsRas;
	map<string, double> studentGrades;
};

#endif
