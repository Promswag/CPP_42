#include <iostream>
#include <string>

struct Data {
	std::string	name;
	int	age;
	char sexe;
	std::string interests[2];
};

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	struct Data val = {"Jo", 35, 'U', {"Dev", "Loutre"}};

	uintptr_t raw = serialize(&val);
	Data *ret = deserialize(raw);
	std::cout << ret->name << ", " << ret->age << ", " << ret->sexe;
	for (unsigned int i = 0; i < sizeof(ret->interests) / sizeof(ret->interests[0]); i++) {
		std::cout << ", " << ret->interests[i];
	}
	std::cout << "\n";
	return (0);
}
