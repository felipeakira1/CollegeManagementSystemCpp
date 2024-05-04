/*
 * TeacherDTO.cpp
 *
 *  Created on: 6 de abr. de 2024
 *      Author: felip
 */

#include "../../include/dto/TeacherDTO.h"

TeacherDTO::TeacherDTO(string& name, int age, string& phone, string& id, float salary) : Person(name, age, phone), id(id), salary(salary) {}

string& TeacherDTO::getId()
{
	return id;
}

void TeacherDTO::setId(const string &id)
{
	this->id = id;
}

float TeacherDTO::getSalary() const {
	return salary;
}

void TeacherDTO::setSalary(float salary) {
	this->salary = salary;
}

ostream& operator<<(ostream& os, const shared_ptr<TeacherDTO> teacher) {
    os << "[ID: " << teacher->getId()
       << ", Nome: " << teacher->getName()
       << ", Idade: " << teacher->getAge()
       << ", Telefone: " << teacher->getPhone()
       << ", Salario: " << teacher->getSalary()
       << "]";
    return os;
}
