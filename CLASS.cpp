#include <iostream>
using namespace std;
struct Node
{
	Node* first;
	Node* second;
	int value;
	Node(Node* first, Node* second, int value)
	{
		this->first = first;
		this->second = second;
		this->value = value;

	}

	Node(int value)
	{
		first = nullptr;
		second = nullptr;
		this->value = value;
	}
};



int main()
{
	Node* node4 = new Node(nullptr, nullptr, 4);
	Node* node3 = new Node(3);
	Node* node2 = new Node(node3, node4, 2);
	Node* node1 = new Node(node2, node2, 1);
	node3->first = node2;
	node3->second = node4;
	Node* head = node1;
	cout << "1 (first)->" << node1->first->value << endl;
	cout << "1 (second)->" << node1->second->value << endl;
	cout << "2 (first)->" << node2->first->value << endl;
	cout << "2 (second)->" << node2->second->value << endl;
	cout << "3 (first)->" << node3->first->value << endl;
	cout << "3 (second)->" << node3->second->value << endl;
	if (node4->first == nullptr && node4->second == nullptr) {
		cout << "4 (first)-> nullptr"  << endl;
		cout << "4 (second)->nullptr" << endl;
	}
	delete node1, node2, node3, node4;
    
}


