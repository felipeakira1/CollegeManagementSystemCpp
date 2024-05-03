/*
 * TeacherDTO.h
 *
 *  Created on: 6 de abr. de 2024
 *      Author: felip
 */

#ifndef TEACHERDTO_H_
#define TEACHERDTO_H_

#include "Person.h"
#include <string>
using namespace std;

class TeacherDTO : public Person
{
private:
	string id;
	float salary;

public:
	TeacherDTO(string& name, int age, string& phone, string& id, float salary);
	string& getId();
	void setId(const string &id);
	float getSalary() const;
	void setSalary(float salario);
};

#endif /* INCLUDE_DTO_TEACHERDTO_H_ */
