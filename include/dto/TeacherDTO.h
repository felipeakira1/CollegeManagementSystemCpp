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
#include <memory>
#include <iostream>
using namespace std;

class TeacherDTO : public Person
{
private:
	string id;
	float salary;

public:
	TeacherDTO(const string& name, int age, const string& phone, const string& id, float salary);
	string& getId();
	void setId(const string &id);
	float getSalary() const;
	void setSalary(float salary);
    friend ostream& operator<<(ostream& os, const shared_ptr<TeacherDTO> teacher);
};

#endif /* INCLUDE_DTO_TEACHERDTO_H_ */
