#include "Interfaces.h"
#include "Employee.h"
#include "Engineer.h"
#include "Personal.h"
#include "Manager.h"
#include "Factory.h"

int main() {
	setlocale(LC_ALL, "Rus");
	Factory factory;
	std::wcout << BLUE << L"\nСоздание новых работников" << RESTORE << std::endl;


	Tester t(20, L"Клюквина Анастасия Николаевна", 4, 250, tester);
	t.calc_budget_part(0.07);
	t.calc();
	t.print_info();
	factory.addEmployee(&t);
	std::cout << "Amount of the Factory: " << factory.get_staff().size() << std::endl << std::endl;

	Programmer p(11, L"Кузьмин Роман Олегович", 5, 146, programmer);
	p.calc_budget_part(0.1);
	p.calc();
	p.print_info();
	factory.addEmployee(&p);

	Programmer p2(41, L"Власов Аркадий Петрович", 8, 300, programmer);
	p2.calc_budget_part(0.1);
	p2.calc();
	p2.print_info();
	factory += &p2; // addEmployee(&p2);

	TeamLeader tl(4, L"Левина Любовь Васильевна", 9, 2000, team_leader);
	tl.calc_budget_part(0.18);
	tl.calc();
	tl.print_info();
	factory += &tl;

	ProjectManager pm(21, L"Ульянов Борис Сергеевич", project_manager);
	pm.calc_budget_part(0.2);
	pm.calc();
	pm.print_info();
	factory += &pm;

	ProjectManager pm2(100, L"Кошкин Артём Андреевич", project_manager);
	pm2.calc_budget_part(0.2);
	pm2.calc();
	pm2.print_info();
	factory += &pm2;

	SeniorManager sm(7, L"Рыбкин Адриан Андреевич", senior_manager);
	sm.calc_budget_part(0.27);
	sm.calc();
	sm.print_info();
	factory += &sm;

	
	std::cout << "Amount of the Factory: " << factory.get_staff().size() << std::endl << std::endl;
	factory.display();
	factory.removeEmployee(&p2);
	factory -= &pm; // removeEmployee(&pm);
	std::cout << "Amount of the Factory: " << factory.get_staff().size() << std::endl << std::endl;
	std::cout << factory; // factory.display();

	if (p == p2) std::cout << "p and p2 are equal" << std::endl;
	if (p != tl) std::cout << "p and pm are not equal" << std::endl;

	std::wcout << t.get_fullname();
	std::cout << std::endl;
	std::cout << tl.get_payment();
	std::cout << std::endl;
	std::cout << p.get_id() << " " << p.get_position();
	std::cout << std::endl;



	return 0;
}
