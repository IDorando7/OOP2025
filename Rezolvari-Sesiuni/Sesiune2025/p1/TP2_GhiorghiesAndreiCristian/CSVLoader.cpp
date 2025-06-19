#include "CSVLoader.h"
#include <fstream>
#include <exception>

class ivalidRowIndex : public std::exception {
    virtual const char* what() const {
        return "Ivalid row index";
    }
};
class ivalidCol : public std::exception {
    virtual const char* what() const {
        return "Colulmn not found";
    }
};
class ivalidColIndex : public std::exception {
    virtual const char* what() const {
        return "Ivalid column index";
    }
};
class ivalidFile : public std::exception {
    virtual const char* what() const {
        return "Ivalid file name";
    }
};
class ivalidLineColNr : public std::exception {
    virtual const char* what() const {
        return "All rows  must have the same number of columns";
    }
};

CSVReader::CSVReader(std::string file)
{
    std::ifstream f(file);
    if (!f) {
        throw ivalidFile();
    }
    std::string s = "", temp = "";
    while (f >> s) {
        data.push_back({});
        int n = (int)data.size() - 1;
        for (char c : s)
            if (c != ',')
                temp += c;
            else {
                data[n].push_back(temp);
                temp = "";
            }

        data[n].push_back(temp);
        temp = "";

        if (n > 0 && data[n].size() != data[n - 1].size())
            throw ivalidLineColNr();
    }
}

int CSVReader::rowCount()
{
    return (int)data.size() - 1;
}

int CSVReader::columnsCount()
{
    return (int)data[0].size();
}

std::string CSVReader::columnName(int i)
{
    if (i < 0 || i >= data[0].size())
        throw ivalidColIndex();

    return data[0][i];
}

std::string CSVReader::get(int i, std::string c)
{
    for (int j = 0; j < data[0].size(); j++)
        if (data[0][j] == c && i + 1 < data.size())
            return data[i + 1][j];

    if (i < 0 || i >= data.size() - 1)
        throw ivalidRowIndex();

    throw ivalidCol();

    return "";
}
