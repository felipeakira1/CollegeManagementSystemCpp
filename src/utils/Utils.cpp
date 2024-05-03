/*
 * Utils.cpp
 *
 *  Created on: 4 de abr. de 2024
 *      Author: felip
 */

#include "../../include/utils/Utils.h"

#include <iostream>

#include "../../include/system/SysInfo.h"

const void Utils::printMessage(string text)
{
	cout << "* " << SysInfo::getSystemName() << " message: " << text << endl;
}
