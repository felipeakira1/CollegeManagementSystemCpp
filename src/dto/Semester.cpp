/*
 * Semester.cpp
 *
 *  Created on: 6 de abr. de 2024
 *      Author: felip
 */
#include "../../include/dto/Semester.h"

Semester::Semester(int year, int semesterNumber) : year(year), semesterNumber(semesterNumber) {}

int Semester::getYear()
{
	return year;
}

int Semester::getSemesterNumber()
{
	return semesterNumber;
}
