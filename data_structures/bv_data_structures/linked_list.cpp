/*
 * linked_list.cpp
 *
 *  Created on: Apr 4, 2015
 *      Author: bvuong
 */

#include <iostream>
#include <stdexcept>

#include "../include/data_structures.h"

void test() {
	std::cout << "dag yo" << std::endl;
}

namespace bv {

linked_list::linked_list() {
	head = 0;
	tail = head;
}

linked_list::linked_list(int n) : linked_list() {
	linked_list_node *current = head;
	for (int i=0; i<n; i++) {
		current = new linked_list_node;
		current->value = 0;
		current = current->next;
	}
}

linked_list::~linked_list() {
	// go down chain of nodes, and delete
	linked_list_node* current = head;
	while (current != 0) {
		//std::cout << current << std::endl;
		linked_list_node* temp = current;
		current = (*current).next;
		delete temp;
	}
}

void linked_list::add(int n) {
	if (head == 0) {
		head = new linked_list_node;
		(*head).value = n;
		return;
	}

	// using O(n) procedure. traverse to the end of the chain
	linked_list_node* current = head;


	while (current->next != 0) {
		//std::cout << current->value << std::endl;
		current = (*current).next;
	}
	current->next = new linked_list_node;
	current->next->value = n;
}

int linked_list::get(int i) {
	// traverse to n
	int n=0;
	linked_list_node* current = head;
	if (current == 0) {
		std::cout << "empty" << std::endl;
		return 0;
	}
	while (n != i) {
		if (current == 0) {
			std::cout << "oops" << std::endl;
			return 0;
		}
		current = (*current).next;
		n++;
	}
	return current->value;
}

int linked_list::size() {
	int n=0;
	linked_list_node* current = head;
	while (current != 0) {
		current = (*current).next;
		n++;
	}
	return n;
}

void linked_list::remove(int i) {

}

void linked_list::set(int i,int value) {

}

int& linked_list::operator[](const int i) {
	linked_list_node* current = head;
	for (int n=0; n<i; n++) {
		if (current == 0) {
			std::cout << "out of bounds" << std::endl;
			throw std::out_of_range("fuck dude");
		}
		current = current->next;
	}
	return current->value;
}

}
