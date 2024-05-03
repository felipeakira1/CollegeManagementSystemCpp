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



