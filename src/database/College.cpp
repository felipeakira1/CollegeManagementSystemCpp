/*
 * College.cpp
 *
 *  Created on: 5 de abr. de 2024
 *      Author: felip
 */

#include "../../include/database/College.h"

map<string, shared_ptr<Person>> College::students;
map<string, shared_ptr<Person>> College::teachers;
vector<shared_ptr<ClassDTO>> College::classes;

map<string, shared_ptr<Person>>& College::getStudentList()
{
	return students;
}

map<string, shared_ptr<Person>>& College::getTeacherList() {
	return teachers;
}

vector<shared_ptr<ClassDTO>>& College::getClassList() {
	return classes;
}
