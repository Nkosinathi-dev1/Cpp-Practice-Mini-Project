#include "LinkedList.h"

int countOccurrences(Node* head, int key)
{
	int occurrences = 0;
	Node* current = head;

	while (current != nullptr) {
		if (current->data == key) {
			occurrences++;
		}
		current = current->next;
	}
	return occurrences;
}
