#pragma once
#include <iostream>
#include <exception>
#include <vector>

class CSVReader
{
private:
	std::vector<std::vector<std::string>> data;

public:
	CSVReader(std::string);
	int rowCount();
	int columnsCount();
	std::string columnName(int);
	std::string get(int, std::string);
};

