//#include "Group.h"
//
//Group::Group() {	
//}
//
//Group::Group(Student* list, int count) {
//	if (count > 0 && list != nullptr) {
//		for (int i = 0; i < count; i++)
//		{
//			add(list[i]);
//		}
//	}
//}
//
//Group::~Group() {	
//}
//
//Student Group::get(int index) {
//	return list.get(index);
//}
//
//void Group::set(int index, Student student) {
//	list.set(index, student);
//}
//
//int Group::getCount() {
//	return list.getSize();
//}
//
//void Group::add(Student student) {
//	list.add(student);
//}
//
////void Group::add(int index, Student student);
////void Group::remove() {
////	list.remove();
////}
//
//void Group::remove(int index) {
//	list.remove(index);
//}
//
//void Group::clear() {
//	list.clear();
//}
//
//bool Group::isEmpty() {
//	return list.isEmpty();
//}
//
//string Group::toString() {	
//	return list.toString();
//}