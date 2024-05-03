/*
 * Person.h
 *
 *  Created on: 6 de abr. de 2024
 *      Author: felip
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>
using namespace std;

class Person {
public:
	Person(string& name, int age, string& phone);
	virtual ~Person();
	int getAge() const;
	void setAge(int age);
	const string& getName() const;
	void setName(const string &name);
	const string& getPhone() const;
	void setPhone(const string &phone);

protected:
	string name;
	int age;
	string phone;
};

#endif /* INCLUDE_DTO_PERSON_H_ */
