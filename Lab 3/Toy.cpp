#include "Toy.h"

void Toy::display() const
{
	std::cout << "Toy: " << name << ", Price: $" << price << ", Manufacturer: " << manufacturer << std::endl;
	// Виводить інформацію про іграшку, включаючи назву, ціну та виробника
}
