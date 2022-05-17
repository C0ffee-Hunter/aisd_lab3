#pragma once
#include <iostream>
#include <fstream>

using namespace std;

template<typename T>
class List
{
public:
    List();
    ~List();
    void push_back(T newvalue);
    void push_front(T newvalue);
    void pop_back();
    void pop_front();
    bool contains(T value);
    T get_elem(size_t index);
    int find(T value);
    size_t get_size();
    void clear();
    bool isEmpty();
private:
    class Node
    {
    public:
        T value;
        class Node* next;
        Node(T newvalue = 0, Node* next = nullptr)
        {
            this->next = next;
            this->value = newvalue;
        }
        ~Node() {};
    };
    Node* head;
    Node* end;
    size_t size;
};

class Floyd {
public:
	Floyd();
	~Floyd();
	string way(string, string, string);
	void print_matrix();
private:
	struct Elem
	{
		bool isinf = false;
		int value = 0;
		int intermediate = -1;
	};
	Elem** matrix = nullptr;
	List<string> namecol;
	size_t size = 0;
	size_t countstr(std::string str, char ch);
	void writefromfile(string);
};