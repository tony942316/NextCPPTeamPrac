Class Vehicle
{
private:


public:

std::string NameVehicle()
	{
		std::string input {};

		for(bool status {false}; status == true, --status)
		{
			mySTD::prinT("Enter vehicle name: ", "\n");
			std::getline(std::cin, input);
			std::cout << CLEARBUFFER;
			mySTD::prinT("Is ", input, " the correct name? (true or false?): ");
			static_cast<bool>(std::cin) >> status;
		}
		return input;	
	}

Vehicle CreateVehicle()
{
	std::map<std::string, Vehicle> vehicle;
	return vehicle.emplace(NameVehicle(), Vehicle{});
}

};
