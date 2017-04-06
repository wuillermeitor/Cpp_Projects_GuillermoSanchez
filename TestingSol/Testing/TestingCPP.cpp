#include <iostream>
#include <vector>
#include <string>

struct persona {
	std::string nombre;
	std::string fechaNacimiento;
	std::string dni;
};

void AddVectors(std::vector<int>vA, std::vector<int>vB) {
	std::vector<int>vC;
	for (std::vector<int>::iterator i = vA.begin(); i != vA.end(); i++) {
		vC=
	}
}

int main() {

	std::vector<int>v1(5);

	std::vector<int>v2(10, 0);
	
	std::vector<int>v3({ 10,9,8,7,6,5,4,3,2,1 });

	std::vector<std::string>v4({ "Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia" });

	std::vector<int>v5(v3);

	std::vector<persona>v6({"Guillermo", "28/11/98", "46491490A"}, { "Dani", "14/5/98", "48127044G" }, { "Antonio", "8/9/99", "46497490B" });

	void AddVectors(std::vector<int>vA, std::vector<int>vB);

	return 0;
}