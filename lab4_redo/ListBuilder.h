#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "SinglyLinkedList.h"


SinglyLinkedList<std::string> buildStringList(const std::string &filePath){
	SinglyLinkedList<std::string> sll;
	std::string outputLine = "";
	std::ifstream infile(filePath);
	int i = 0;
	while (getline(infile,outputLine)) {
		sll.add(outputLine);
		//i++;
		//std::cout << outputLine << std::endl;
	}
	i = 0;
	return sll;
}
SinglyLinkedList<int> buildIntList(const std::string& filePath) {
	SinglyLinkedList<int> sll;
	std::string outputLine = "";
	std::ifstream infile(filePath);
	int temp = 0;
	while (getline(infile, outputLine)) {
		temp = stoi(outputLine);
		sll.add(temp);
		//std::cout << " " << stoi(outputLine) << std::endl;
	}
	return sll;
}
