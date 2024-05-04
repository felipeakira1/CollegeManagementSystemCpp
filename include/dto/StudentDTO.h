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
#include "Person.h"
using namespace std;

class StudentDTO : public Person
{
public:
	StudentDTO(string& name, int age, string& phone, string& ra, string& course);
	const string& getCourse() const;
	void setCourse(const string &course);
	const string& getRa() const;
	void setRa(const string &ra);
    friend ostream &operator<<(ostream &os, const shared_ptr<StudentDTO> &dto);

private:
	string course;
	string ra;
};



#endif /* STUDENTDTO_H_ */
