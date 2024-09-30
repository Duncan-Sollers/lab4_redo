#pragma once
template <typename T>
struct Node {
	Node* next;
	T data;
	Node(T inputData) :data(inputData), next(nullptr) {}
	~Node() {
		std::cout << "destroyed node" << std::endl;
	}
};

template <typename T>
class SinglyLinkedList {
public:
	SinglyLinkedList() {
		head = nullptr;
	}
	~SinglyLinkedList() {
		std::cout << "in destructor" << std::endl;
	}
	void add(T indata) {
		Node<T>* newNode = new Node<T>(indata);
		if (head == nullptr) {
			head = newNode;
		}
		else {
			Node<T>* tempptr = head;
			Node<T>* prev = nullptr;
			while (tempptr != nullptr) {
				prev = tempptr;
				tempptr = tempptr->next;
			}

			prev->next = newNode;
		}
		size++;
		
	}
	void remove() {
		size--;
	}
	bool find(T searchTerm) {
		return false;
	}
	void const displayList() {
		Node<T>* tempptr = head;
		while (tempptr != nullptr) {
			std::cout << "List " << tempptr->data << std::endl;
			tempptr = tempptr->next;
		}
	}
	size_t const sizeOfList() {
		return size;
	}
private:
	Node<T>* head;
	size_t size = 0;
};