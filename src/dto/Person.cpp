/*
 * Person.cpp
 *
 *  Created on: 6 de abr. de 2024
 *      Author: felip
 */

#include "../../include/dto/Person.h"


Person::Person(const string& name, int age, const string& phone) : name(name), age(age), phone(phone) {}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

int Person::getAge() const {
	return age;
}

void Person::setAge(int age) {
	this->age = age;
}

const string& Person::getName() const {
	return name;
}

void Person::setName(const string &name) {
	this->name = name;
}

const string& Person::getPhone() const {
	return phone;
}

void Person::setPhone(const string &phone) {
	this->phone = phone;
}
