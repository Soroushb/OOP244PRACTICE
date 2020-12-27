#include <iostream>
#include "Train.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


namespace sdds {

	void Train::initialize(const char* name, int id) {

		if (name == nullptr || strlen(name) == 0 || id <= 0)
		{
			m_name[0] = '\0';
			this->id = 0;

		}
		else {
			strcpy(m_name, name);
			this->id = id;
			cargo = nullptr;
		}
	}
	bool Train::isValid() const {

		if (id <= 0 || m_name == nullptr || strlen(m_name) == 0)
			return false;
		else
			return true;

	}
	void Train::loadCargo(Cargo car) {
		if (cargo == nullptr)
		{
			cargo = new Cargo;
			strcpy(cargo->name, car.name);
			cargo->weight = car.weight;
		}
	}
	void Train::unloadCargo() {
		if (cargo != nullptr)
		{
			delete cargo;
			cargo = nullptr;
		}
	}
	void Train::display() const {
		cout << "***Train Summary***" << endl;
		if (!isValid())
		{
			cout << "This is an invalid train." << endl;
		}
		else {
            
			cout << "Name: " << m_name << endl;
			cout << "ID: " << id << endl;
			if (isValid() && cargo == nullptr)
				cout << "No cargo on this train." << endl;
			else {
				cout << "Cargo :" << cargo->name << endl;
				cout << "Weight: " << cargo->weight << endl;
			}
		}
	}
}