/*
 * StudentDTO.cpp
 *
 *  Created on: 5 de abr. de 2024
 *      Author: felip
 */

#include "../../include/dto/StudentDTO.h"

StudentDTO::StudentDTO(const string &name, int age, const string &phone, const string &ra,
                       const string &course) :
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

ostream &operator<<(ostream &os, const shared_ptr<StudentDTO> &dto) {
    os << "[RA: " << dto->getRa()
       << ", Nome: " << dto->getName()
       << ", Curso: " << dto->getCourse()
       << ", Idade: " << dto->getAge()
       << ", Telefone: " << dto->getPhone()
       << "]";
    return os;
}

void StudentDTO::addClass(const string &code) {
    classes.push_back(code);
}

const vector<string> &StudentDTO::getClasses() const {
    return classes;
}

void StudentDTO::setClasses(const vector<string> &classes) {
    StudentDTO::classes = classes;
}
