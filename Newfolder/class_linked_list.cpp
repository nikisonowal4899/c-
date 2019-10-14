#include <iostream>

using namespace std;

class node {
public:
	int data;
	node* next;

	//constructor
	node(int data) {
		this->next = nullptr;
		this->data = data;
	}
};

int main()
{
	node firstNode(9);
	node* temp = &firstNode;

	temp->data = 5;

	cout << "Node data: " << temp->data << endl;

	node *temp2 = new node(4);

	cout << "Second Node: " << temp2->data << endl;



	return 0;
}