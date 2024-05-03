/*
 * TeacherDAO.cpp
 *
 *  Created on: 6 de abr. de 2024
 *      Author: felip
 */

#include "../../include/dao/TeacherDAO.h"
#include "../../include/database/College.h"

#include <string>
#include <vector>
#include <map>

TeacherDAO::TeacherDAO() {}

void TeacherDAO::add(const shared_ptr<TeacherDTO>& teacherDTO) {
	College::getTeacherList().insert(make_pair(teacherDTO->getId(), teacherDTO));
}

vector<shared_ptr<TeacherDTO>> TeacherDAO::getAll()
{
	map<string, shared_ptr<Person>> teachers_map = College::getTeacherList();
	vector<shared_ptr<TeacherDTO>> teachers_vector;
	for(const auto& teacher_iterator : teachers_map)
	{
		shared_ptr<TeacherDTO> teacher_ptr = dynamic_pointer_cast<TeacherDTO>(teacher_iterator.second);
		teachers_vector.push_back(teacher_ptr);
	}
	return teachers_vector;
}

shared_ptr<TeacherDTO> TeacherDAO::getById(const string& id)
{
	map<string, shared_ptr<Person>>& teachers_map = College::getTeacherList();
	map<string, shared_ptr<Person>>::iterator teacher_it = teachers_map.find(id);
	if(teacher_it != teachers_map.end()) {
		shared_ptr<TeacherDTO> teacher_ptr = dynamic_pointer_cast<TeacherDTO>(teacher_it->second);
		return teacher_ptr;
	} else {
		return nullptr;
	}
}

void TeacherDAO::remove(const string &id) {
}

void TeacherDAO::update(const TeacherDTO &updatedTeacher) {
}
