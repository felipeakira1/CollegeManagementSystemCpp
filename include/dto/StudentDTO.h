/*
 * StudentDTO.h
 *
 *  Created on: 5 de abr. de 2024
 *      Author: felip
 */

#ifndef STUDENTDTO_H_
#define STUDENTDTO_H_

#include <string>
#include <memory>
#include <ostream>
#include <vector>
#include "Person.h"
using namespace std;

class StudentDTO : public Person
{
public:
	StudentDTO(const string &name, int age, const string &phone, const string &ra, const string &course);
	const string& getCourse() const;
	void setCourse(const string &course);
	const string& getRa() const;
	void setRa(const string &ra);
    friend ostream &operator<<(ostream &os, const shared_ptr<StudentDTO> &dto);
    void addClass(const string &code);
    const vector<string> &getClasses() const;
    void setClasses(const vector<string> &classes);

private:
	string course;
	string ra;
    vector<string> classes;
};



#endif /* STUDENTDTO_H_ */
