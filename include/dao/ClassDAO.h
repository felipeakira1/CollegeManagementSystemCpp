/*
 * ClassDAO.h
 *
 *  Created on: 3 de mai. de 2024
 *      Author: Felipe
 */

#ifndef INCLUDE_DAO_CLASSDAO_H_
#define INCLUDE_DAO_CLASSDAO_H_

#include <memory>

#include "../dto/ClassDTO.h"
#include "../dto/StudentDTO.h"
#include "AbstractDAO.h"

class ClassDAO : public AbstractDAO<ClassDTO>{
public:
	ClassDAO();
	void add(const shared_ptr<ClassDTO>& classe);
	vector<shared_ptr<ClassDTO>> getAll();
	shared_ptr<ClassDTO> getById(const string& id);
};

#endif /* INCLUDE_DAO_CLASSDAO_H_ */
