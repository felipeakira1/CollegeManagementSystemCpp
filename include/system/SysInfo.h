/*
 * SysInfo.h
 *
 *  Created on: 4 de abr. de 2024
 *      Author: felip
 */

#ifndef SYSINFO_H_
#define SYSINFO_H_

#include <string>
using namespace std;

class SysInfo final
{
private:
	static const string author;
	static const string date;
	static const string department;
	static const string institution;
	static const string systemName;
	static const string version;

public:
	static const string& getAuthor();
	static const string& getDate();
	static const string& getDepartment();
	static const string& getInstitution();
	static const string& getSystemName();
	static const string& getVersion();

	static const string getFullVersion();
};

#endif /* SYSINFO_H_ */
