/*
 * StudentDAO.h
 *
 *  Created on: 5 de abr. de 2024
 *      Author: felip
 */

#ifndef STUDENTDAO_H_
#define STUDENTDAO_H_

#include <map>
#include <memory>
#include <string>

#include "../database/College.h"
#include "../dto/StudentDTO.h"
#include "AbstractDAO.h"

using namespace std;

class StudentDAO : public AbstractDAO<StudentDTO>
{
public:
	void add(const shared_ptr<StudentDTO>& student);
	vector<shared_ptr<StudentDTO>> getAll();
	shared_ptr<StudentDTO> getById(const string& id);
	// void remove(const string& ra);
};



#endif /* STUDENTDAO_H_ */
