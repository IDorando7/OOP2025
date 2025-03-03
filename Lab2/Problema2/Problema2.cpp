#include <iostream>
#include <cstring>

#include "Class.h"
#include "Functions.h"

using namespace std;

int main()
{
    Student students[2];

    char name1[256], name2[256];
    cin.getline(name1, 256);
    cin.getline(name2, 256);

    int grade_math[2], grade_engl[2], grade_hist[2];
    cin >> grade_math[0] >> grade_math[1];
    cin >> grade_engl[0] >> grade_engl[1];
    cin >> grade_hist[0] >> grade_hist[1];

    students[0].Set_Name(name1);
    students[0].Set_Grade_Math(grade_math[0]);
    students[0].Set_Grade_Engl(grade_engl[0]);
    students[0].Set_Grade_Hist(grade_hist[0]);
    float average1 = students[0].Get_Avg_Grade();

    students[1].Set_Name(name2);
    students[1].Set_Grade_Math(grade_math[1]);
    students[1].Set_Grade_Engl(grade_engl[1]);
    students[1].Set_Grade_Hist(grade_hist[1]);
    float average2 = students[1].Get_Avg_Grade();

    cout << students[0].Get_Name() << " : " << average1 << "\n" << students[1].Get_Name() << " : " << average2 << "\n";

}