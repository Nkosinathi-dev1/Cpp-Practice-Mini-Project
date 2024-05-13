struct Node
{
	int data;
	Node* next;

	Node(int val) : data(val), next(nullptr) {}
};

int countOccurrences(Node* head, int key);
