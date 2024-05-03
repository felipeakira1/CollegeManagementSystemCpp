/*
 * Subject.cpp
 *
 *  Created on: 6 de abr. de 2024
 *      Author: felip
 */

#include "../../include/dto/Subject.h"

Subject::Subject(string code, string name, string syllabus) : code(code), name(name), syllabus(syllabus) {}

const string& Subject::getCode() const {
	return code;
}

void Subject::setCode(const string &code) {
	this->code = code;
}

const string& Subject::getName() const {
	return name;
}

void Subject::setName(const string &name) {
	this->name = name;
}

const string& Subject::getSyllabus() const {
	return syllabus;
}

void Subject::setSyllabus(const string &syllabus) {
	this->syllabus = syllabus;
}

