/*
 * AbstractDAO.h
 *
 *  Created on: 2 de mai. de 2024
 *      Author: felip
 */

#ifndef INCLUDE_DAO_ABSTRACTDAO_H_
#define INCLUDE_DAO_ABSTRACTDAO_H_

template <typename T>
class AbstractDAO {
public:
	virtual void add(const shared_ptr<T>& ptr_dto) = 0;
	virtual vector<shared_ptr<T>> getAll() = 0;
	virtual shared_ptr<T> getById(const string& id) = 0;

	virtual ~AbstractDAO() {};
};

#endif /* INCLUDE_DAO_ABSTRACTDAO_H_ */
