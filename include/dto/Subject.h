/*
 * Subject.h
 *
 *  Created on: 6 de abr. de 2024
 *      Author: felip
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <string>
#include <vector>
#include <map>

using namespace std;

class Subject
{
protected:
	string code;
	string name;
	string syllabus;

public:
	Subject(string code, string name, string syllabus);
	const string& getCode() const;
	void setCode(const string &code);

	const string& getName() const;
	void setName(const string &name);

	const string& getSyllabus() const;
	void setSyllabus(const string &syllabus);
};



#endif /* SRC_DTO_SUBJECT_H_ */
