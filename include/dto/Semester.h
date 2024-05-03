/*
 * Semester.h
 *
 *  Created on: 6 de abr. de 2024
 *      Author: felip
 */

#ifndef SEMESTER_H_
#define SEMESTER_H_

class Semester
{
protected:
	int year;
	int semesterNumber;

public:
	Semester(int year, int semesterNumber);
	int getYear();
	int getSemesterNumber();

};

#endif /* INCLUDE_DTO_SEMESTER_H_ */
