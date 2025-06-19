#include "CSVLoader.h"

int main()
{
    try {
        CSVReader csv("example.csv");

        std::cout << "Columns: " << csv.columnsCount() << std::endl;
        for (int i = 0; i < csv.columnsCount(); i++) {
            std::cout << "   * " << csv.columnName(i) << std::endl;
        }
        std::cout << "Items  : " << csv.rowCount() << std::endl;
        for (int i = 0; i < csv.rowCount(); ++i) {
            std::cout << csv.get(i, "Name") << " - " << csv.get(i, "Age") << "\n";
        }
        try {
            csv.get(100, "Name");
        }
        catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
        try {
            csv.get(1, "Surname");
        }
        catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
        try {
            std::cout << "Column 100 is " << csv.columnName(100);
        }
        catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
