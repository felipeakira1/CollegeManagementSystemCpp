/*
 * ClassDAO.cpp
 *
 *  Created on: 3 de mai. de 2024
 *      Author: Felipe
 */

#include "../../include/dao/ClassDAO.h"

#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

#include "../../include/database/College.h"

ClassDAO::ClassDAO() {}

void ClassDAO::add(const shared_ptr<ClassDTO>& classe)
{
	College::getClassList().push_back(classe);
}

vector<shared_ptr<ClassDTO>> ClassDAO::getAll()
{
	return College::getClassList();
}

shared_ptr<ClassDTO> ClassDAO::getById(const string& id)
{
	vector<shared_ptr<ClassDTO>>& classes = College::getClassList();
	for(const auto& classDTO : classes)
	{
		if(classDTO->getCode() == id)
		{
			return classDTO;
		}
	}
	return nullptr;
}
