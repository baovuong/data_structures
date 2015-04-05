/*
 * list.h
 *
 *  Created on: Apr 4, 2015
 *      Author: bvuong
 */

#ifndef DATA_STRUCTURES_LIST_H_
#define DATA_STRUCTURES_LIST_H_

namespace bv {

class list {
public:
	virtual void add(int)=0;
	virtual int get(int)=0;
	virtual void set(int,int)=0;
	virtual int size()=0;
	virtual void remove(int)=0;

	virtual int & operator[](int)=0;
};

class dynamic_array : public list {
public:
	dynamic_array();
	virtual ~dynamic_array();
	void add(int);
	int get(int);
	int size();
	void remove(int);
};

class linked_list : public list {
private:
	struct linked_list_node {
		int value;
		linked_list_node* next;
		linked_list_node* prev;
	};

	linked_list_node* head;
	linked_list_node* tail;

public:
	linked_list();
	linked_list(int);
	virtual ~linked_list();
	void add(int);
	int get(int);
	void set(int,int);
	int size();
	void remove(int);

	int & operator[](const int);
};

}




#endif /* DATA_STRUCTURES_LIST_H_ */
