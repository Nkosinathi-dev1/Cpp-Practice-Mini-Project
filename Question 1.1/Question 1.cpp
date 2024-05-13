#include "LinkedList.h"
#include <iostream>

Node* createLinkedList()
{
	Node* head = nullptr;
	Node* tail = nullptr;

	int numElements;
	std::cout << "Enter the number of elements in the linked list: ";
	std::cin >> numElements;

	int value = 0;
	for (int i = 0; i < numElements; ++i) {

		std::cout << "Enter the element " << i + 1 << " of the linked list: ";
		std::cin >> value;

		Node* newNode = new Node(value);
		if (head == nullptr) {
			head = tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
	}

	return head;
}


void swapFirstAndLast(Node*& head) {
	if (head == nullptr || head->next == nullptr) {
		return;
	}

	Node* secondLast = nullptr;
	Node* last = head;

	while (last->next != nullptr) {
		secondLast = last;
		last = last->next;
	}

	std::swap(head->data, last->data);

	if (head->next != last) {
		secondLast->next = head;
		last->next = head->next;
		head->next = nullptr;
		head = last;
	}
}

int main() {
	Node* head = createLinkedList();

	int key;
	std::cout << "Enter the key: ";
	std::cin >> key;

	swapFirstAndLast(head);

	int occurrences = countOccurrences(head, key);
	std::cout << "Number of occurrences of " << key << " is: " << occurrences << std::endl;



	return 0;
}




