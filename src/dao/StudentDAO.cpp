/*
 * StudentDAO.cpp
 *
 *  Created on: 5 de abr. de 2024
 *      Author: felip
 */

#include "../../include/dao/StudentDAO.h"

#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>

void StudentDAO::add(const shared_ptr<StudentDTO>& student) {
	College::getStudentList().insert(make_pair(student->getRa(), student));
}


vector<shared_ptr<StudentDTO>> StudentDAO::getAll()
{
	map<string, shared_ptr<Person>> students_map = College::getStudentList();
	vector<shared_ptr<StudentDTO>> students_vector;
	for(const auto& student : students_map)
	{
		shared_ptr<StudentDTO> studentDTO = dynamic_pointer_cast<StudentDTO>(student.second);
		students_vector.push_back(studentDTO);
	}
	return students_vector;
}

shared_ptr<StudentDTO> StudentDAO::getById(const string& id)
{
	map<string, shared_ptr<Person>>& students_map = College::getStudentList();
	map<string, shared_ptr<Person>>::iterator student_it = students_map.find(id);
	if(student_it != students_map.end()){
		shared_ptr<StudentDTO> student_ptr = dynamic_pointer_cast<StudentDTO>(student_it->second);
		return student_ptr;
	} else {
		return nullptr;
	}
}

/*
void StudentDAO::remove(const string& ra)
{
	auto& students = college->getStudentList();
	auto it = find_if(students.begin(), students.end(), [&ra](const shared_ptr<StudentDTO>& student) { return student->getRa() == ra; });

	if(it != students.end())
	{
		students.erase(it);
		cout << "Estudante com RA " << ra << " removido com sucesso. " << endl;
	} else {
		cout << "Estudante com RA " << ra << " não encontrado." << endl;
	}
}
*/
