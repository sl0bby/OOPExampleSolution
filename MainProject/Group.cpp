#include "Group.h"
Group::~Group() {
	if (list != nullptr)
	{
		delete[] list;
	}
}

Student Group::getStudents(int index) {
	if (index >= 0 && index < count)
	{
		return list[index];
	}
	return Student("", 0, 0, false);
}
void Group::set(Student st1, Student st2) {
	for (int i = 0; i < count; i++)
	{
		if (st1.getName() == list[i].getName()
			&& st1.getAge() == list[i].getAge()
			&& st1.isAlive() == list[i].isAlive())
		{
			list[i] = st2;
		}
	}
}
int Group::getCount() {
	return count;
}

string Group::toString() {
	string s = "";

	for (int i = 0; i < count; i++)
	{
		s += list[i].toString();
	}
}