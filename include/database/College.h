/*
 * College.h
 *
 *  Created on: 5 de abr. de 2024
 *      Author: felip
 */

#ifndef COLLEGE_H_
#define COLLEGE_H_

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "../dto/Person.h"
#include "../dto/StudentDTO.h"
#include "../dto/TeacherDTO.h"
#include "../dto/ClassDTO.h"

using namespace std;

class College final
{
private:
	static map<string, shared_ptr<Person>> students;
	static map<string, shared_ptr<Person>> teachers;
	static vector<shared_ptr<ClassDTO>> classes;

public:
	static map<string, shared_ptr<Person>>& getStudentList();
	static map<string, shared_ptr<Person>>& getTeacherList();
	static vector<shared_ptr<ClassDTO>>& getClassList();
};



#endif /* COLLEGE_H_ */
