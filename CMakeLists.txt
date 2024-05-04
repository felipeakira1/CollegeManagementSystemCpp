cmake_minimum_required(VERSION 3.28)
project(CollegeManagementSystemCpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(include/controller)
include_directories(include/dao)
include_directories(include/database)
include_directories(include/dto)
include_directories(include/menu)
include_directories(include/system)
include_directories(include/utils)

add_executable(CollegeManagementSystemCpp
        include/controller/Controller.h
        include/dao/AbstractDAO.h
        include/dao/ClassDAO.h
        include/dao/StudentDAO.h
        include/dao/TeacherDAO.h
        include/database/College.h
        include/dto/ClassDTO.h
        include/dto/Person.h
        include/dto/Semester.h
        include/dto/StudentDTO.h
        include/dto/Subject.h
        include/dto/TeacherDTO.h
        include/menu/Menu.h
        include/system/SysInfo.h
        include/utils/Utils.h
        src/controller/Controller.cpp
        src/dao/ClassDAO.cpp
        src/dao/StudentDAO.cpp
        src/dao/TeacherDAO.cpp
        src/database/College.cpp
        src/dto/ClassDTO.cpp
        src/dto/Person.cpp
        src/dto/Semester.cpp
        src/dto/StudentDTO.cpp
        src/dto/Subject.cpp
        src/dto/TeacherDTO.cpp
        src/menu/Menu.cpp
        src/system/SysInfo.cpp
        src/utils/Utils.cpp
        src/Start.cpp)
