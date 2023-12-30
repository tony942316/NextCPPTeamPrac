#include "headers.h"

int main
{
	mySTD::prinT(read(main_menu.txt), "\n");

	int input {};
	std::cin >> input;

	for(bool status {false}; status == true, --status)
	{
		switch(input)
		{
			case 1
				vehicle::CreateVehicle(input);
				return true;
			case 2
				user::CreateUser(input);
				return true;
			case 3
				data::ListUsers(input);
				return true;
			case 4
				data::ShowLog(input);
				return true;
			case 5
				data::AccessUserData();
				return true;
			case 6
				data::ProgramInfo();
				return true;
			case 7
				return false;
			default:
			std::cerr << "Invalid input: " << input << '\n' << "THIS MESSAGE IS ON NEWLINE AFTER CERR OF INPUT";
			return true;
		}

	mySTD::prinT("Exiting Program", "\n");

	return 0;
}
