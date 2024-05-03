/*
 * StudentDTO.cpp
 *
 *  Created on: 5 de abr. de 2024
 *      Author: felip
 */

#include "../../include/dto/StudentDTO.h"

StudentDTO::StudentDTO(string &name, int age, string &phone, string &ra,
		string &course) :
		Person(name, age, phone), ra(ra), course(course) {
}

const string& StudentDTO::getCourse() const {
	return course;
}

void StudentDTO::setCourse(const string &course) {
	this->course = course;
}


const string& StudentDTO::getRa() const {
	return ra;
}

void StudentDTO::setRa(const string &ra) {
	this->ra = ra;
}
