/*
 * Controller.cpp
 *
 *  Created on: 4 de abr. de 2024
 *      Author: felip
 */

#include "../../include/controller/Controller.h"

#include <exception>
#include <iostream>
#include <iterator>
#include <map>

#include "../../include/database/College.h"
#include "../../include/dto/ClassDTO.h"
#include "../../include/dto/StudentDTO.h"
#include "../../include/dto/TeacherDTO.h"
#include "../../include/menu/Menu.h"
#include "../../include/utils/Utils.h"

Controller::Controller() {
	studentDAO = make_unique<StudentDAO>();
	teacherDAO = make_unique<TeacherDAO>();
	classDAO = make_unique<ClassDAO>();
	//studentDAO->add(make_shared<StudentDTO>("Felipe Akira Nozaki", 20, "(14) 997080902", 172885, "Sistemas de Informação"));
	//teacherDAO->add(make_shared<TeacherDTO>("Juan Salamanca", 40, "(11) 1111111", 1, 5000));
}

Controller::~Controller() {}

void Controller::start() {
	vector<string> menuItens{"Estudantes", "Professores", "Turmas", "Relatórios", "Ajuda", "Sair do programa:"};
	vector<void (Controller::*)()> functions{&Controller::actionStudents, &Controller::actionTeachers, &Controller::actionClasses};
	launchActions("Menu Principal", menuItens, functions);
}

void Controller::actionStudents()
{
	vector<string> menuStudents{"Inserir estudante", "Visualizar todos os estudantes", "Pesquisar estudante por RA", "Alterar estudante", "Voltar ao menu principal"};
	vector<void (Controller::*)()> functions{&Controller::actionInsertStudent, &Controller::actionGetAllStudents, &Controller::actionGetStudentByRa, &Controller::actionToDo};
	launchActions("Menu Estudantes", menuStudents, functions);
}

void Controller::actionInsertStudent()
{
	string name;
	int age;
	string phone;
	string ra;
	string course;
	cin.ignore();
	cout << "Digite o nome do estudante: ";
	getline(cin, name);
	cout << "Digite a idade: ";
	cin >> age;
	cin.ignore();
	cout << "Digite o telefone: ";
	getline(cin, phone);
	cout << "Digite o RA: ";
	getline(cin, ra);
	cout << "Digite o curso: ";
	getline(cin, course);

	shared_ptr<StudentDTO> student = make_shared<StudentDTO>(name, age, phone, ra, course);
	studentDAO->add(student);
	return;
}

void Controller::actionGetAllStudents() {
    vector<shared_ptr<StudentDTO>> students = studentDAO->getAll();

    if (students.empty()) {
        cout << "Nenhum estudante encontrado." << endl;
    } else {
    	for(const shared_ptr<StudentDTO> &student_ptr : students)
    	{
    		cout << student_ptr << endl;
    	}
    }
}

void Controller::actionGetStudentByRa() {
	string ra;
	cin.ignore();
	cout << "Digite o RA do estudante: ";
	getline(cin, ra);

	shared_ptr<StudentDTO> student_ptr = studentDAO->getById(ra);
	if(student_ptr != nullptr){
		cout << student_ptr << endl;
	} else {
		cout << "Estudante nao encontrado." << endl;
	}
}

void Controller::actionTeachers()
{
	vector<string> menuTeachers{"Inserir professor", "Visualizar todos os professores", "Pesquisar professor por ID", "Mostrar disciplinas ministradas por um professor", "Alterar professor", "Remover professor", "Voltar ao menu principal"};
	vector<void (Controller::*)()> functions{&Controller::actionInsertTeacher, &Controller::actionGetAllTeachers, &Controller::actionGetTeacherById, &Controller::actionToDo};
	launchActions("Menu Professores", menuTeachers, functions);
}

void Controller::actionInsertTeacher()
{
	string name;
	int age;
	string phone;
	string id;
	float salary;

	cin.ignore();
	cout << "Digite o nome do professor: ";
	getline(cin, name);
	cout << "Digite a idade: ";
	cin >> age;
	cin.ignore();
	cout << "Digite o telefone: ";
	getline(cin, phone);
	cout << "Digite o id: ";
	getline(cin, id);
	cout << "Digite o salario: ";
	cin >> salary;

	shared_ptr<TeacherDTO> teacher = make_shared<TeacherDTO>(name, age, phone, id, salary);
	teacherDAO->add(teacher);
	return;
}

void Controller::actionGetAllTeachers()
{
    vector<shared_ptr<TeacherDTO>> teachers = teacherDAO->getAll();
    if (teachers.empty()) {
        cout << "Nenhum professor encontrado." << endl;
    } else {
        for (const shared_ptr<TeacherDTO> teacher_ptr: teachers) {
			cout << teacher_ptr << endl;
        }
    }
}

void Controller::actionGetTeacherById()
{
	cin.ignore();
	string id;
	cout << "Digite o id do professor: ";
	getline(cin, id);
	shared_ptr<TeacherDTO> teacher_ptr = teacherDAO->getById(id);
	if(teacher_ptr != nullptr) {
		cout << teacher_ptr << endl;
	} else {
		cout << "Professor nao encontrado!" << endl;
	}
}

void Controller::actionClasses()
{
	vector<string> menuTeachers{"Inserir turma", "Visualizar todas as turmas", "Pesquisar turma por codigo", "Adicionar professor a uma turma", "Adicionar estudante a uma turma", "Voltar ao menu principal"};
	vector<void (Controller::*)()> functions{&Controller::actionInsertClass, &Controller::actionGetAllClasses, &Controller::actionGetClassByCode, &Controller::actionAddTeacherToClass};
	launchActions("Menu turmas", menuTeachers, functions);
}

void Controller::actionInsertClass()
{
	string code;
	string name;
	string syllabus;
	int year;
	int semesterNumber;

	cin.ignore();
	cout << "Digite o código da disciplina: ";
	getline(cin, code);

	cout << "Digite o nome da disciplina: ";
	getline(cin, name);

	cout << "Digite a ementa da disciplina: ";
	getline(cin, syllabus);

	cout << "Digite o ano da turma: ";
	cin >> year;

	cout << "Digite o numero do semestre do ano: ";
	cin >> semesterNumber;

	// Realizar verificação para ver se disciplina já existe;
	shared_ptr<ClassDTO> classe = make_shared<ClassDTO>(code, name, syllabus, year, semesterNumber);
	classDAO->add(classe);
}

void Controller::actionGetAllClasses()
{
	auto classes = classDAO->getAll();

	    if (classes.empty()) {
	        cout << "Nenhuma turma encontrada." << endl;
	    } else {
	        for (auto it = classes.begin(); it != classes.end(); it++) {
	        	shared_ptr<ClassDTO> classDTO = *it;
				cout << classDTO << endl;
	        }
	    }
}

void Controller::actionGetClassByCode()
{
	cin.ignore();
	string code;
	cout << "Digite o codigo da disciplina: ";
	getline(cin, code);
	shared_ptr<ClassDTO> class_ptr = classDAO->getById(code);
	if(class_ptr != nullptr)
	{
		cout << class_ptr << endl;
	} else {
		cout << "Classe nao encontrada!" << endl;
	}
}

void Controller::actionAddTeacherToClass()
{
    cin.ignore();
    string classCode;
    cout << "Digite o codigo da turma: ";
    getline(cin, classCode);
    shared_ptr<ClassDTO> class_ptr = classDAO->getById(classCode);
    if(class_ptr != nullptr) {
        if(class_ptr->getTeacherId() == "")
        {
            string teacherId;
            cout << "Digite o id do professor: ";
            getline(cin, teacherId);
            shared_ptr<TeacherDTO> teacher_ptr = teacherDAO->getById(teacherId);
            if(teacher_ptr != nullptr) {
                cout << teacher_ptr << endl;
                class_ptr->setTeacherId(teacherId);
                cout << "Professor adicionado com sucesso." << endl;
            }
        } else {
            cout << "Turma já possui professor." << endl;
        }
    } else {
        cout << "Turma nao encontrada." << endl;
    }
}

void Controller::launchActions(string title, vector<string> menuItens,
		vector<void (Controller::*)()> functions) {
	try
	{
		Menu menu(menuItens, title, "Sua opcao: ");
		menu.setSymbol("*");

		while(int choice = menu.getChoice())
		{
			(this->*functions.at(choice-1))();
		}
	}
	catch(const exception &myException)
	{
		Utils::printMessage("Unexpected problem launching actions. " + string(myException.what()));
	}
}

void Controller::actionToDo(void)
{
	Utils::printMessage("Place holder function. Code was not written yet!\n");
}

