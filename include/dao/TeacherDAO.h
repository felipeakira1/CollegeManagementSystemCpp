/*
 * TeacherDAO.h
 *
 *  Created on: 6 de abr. de 2024
 *      Author: felip
 */

#ifndef TEACHERDAO_H_
#define TEACHERDAO_H_

#include <memory>
#include <string>
#include <vector>
#include <map>

#include "../dto/TeacherDTO.h"
#include "AbstractDAO.h"

class TeacherDAO : public AbstractDAO<TeacherDTO>
{
public:
	TeacherDAO();
	void add(const shared_ptr<TeacherDTO>& teacherDTO);
	vector<shared_ptr<TeacherDTO>> getAll();
	shared_ptr<TeacherDTO> getById(const string& id);
	void remove(const string& id);
	void update(const TeacherDTO& updatedTeacher);
};



#endif
