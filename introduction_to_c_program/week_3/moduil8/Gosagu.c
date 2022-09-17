#include <iostream>

using namespace std;

int main() {

    int subjectNum, count = 0;


    cout << "=======================================\n";
    cout << "Program: GPA CALCULATOR\n";
    cout << "Author: RAHMAN KAZI ASHIKUR B081910450, FTKEE\n";
    cout << "=======================================\n\n";

    cout << "Number of subjects this semester: ";
    cin >> subjectNum;

    int creditHours[subjectNum],totalCredits = 0,totalScore[subjectNum];
    string subjectName[subjectNum];
    string grade[subjectNum];
    float point[subjectNum], quality_points[subjectNum],totalQuality = 0.0, GPA = 0.0;

    while (count < subjectNum)
    {

        cout << "Name of Subject " << count+1 << ": ";
        cin >> subjectName[count];
        cout << "Credit Hours: ";
        cin >> creditHours[count];
        cout << "Total Score: ";
        cin >> totalScore[count];


        if (totalScore[count] >= 80 && totalScore[count] <= 100) {
            grade[count] = "A";
            point[count] = 4.0;
        } else if (totalScore[count] >= 75 && totalScore[count] <= 79) {
            grade[count] = "A-";
            point[count] = 3.7;

        } else if (totalScore[count] >= 70 && totalScore[count] <= 74) {
            grade[count] = "B+";
            point[count] = 3.3;

        } else if (totalScore[count] >= 65 && totalScore[count] <= 69) {
            grade[count] = "B";
            point[count] = 3.0;

        } else if (totalScore[count] >= 60 && totalScore[count] <= 64) {
            grade[count] = "B-";
            point[count] = 2.7;

        } else if (totalScore[count] >= 55 && totalScore[count] <= 59) {
            grade[count] = "C+";
            point[count] = 2.3;

        } else if (totalScore[count] >= 50 && totalScore[count] <= 54) {
            grade[count] = "C";
            point[count] = 2.0;

        } else if (totalScore[count] >= 47 && totalScore[count] <= 49) {
            grade[count] = "C-";
            point[count] = 1.7;

        } else if (totalScore[count] >= 44 && totalScore[count] <= 46) {
            grade[count] = "D+";
            point[count] = 1.3;

        } else if (totalScore[count] >= 40 && totalScore[count] <= 43) {
            grade[count] = "D";
            point[count] = 1.0;

        } else if (totalScore[count] >= 0 && totalScore[count] <= 39) {
            grade[count] = "E";
            point[count] = 0.0;

        } else {
            cout << "ERROR! INVALID SCORE!";
            grade[count] = "?";
            point[count] = 0.0;
        }

        quality_points[count] = point[count] * creditHours[count];
        totalQuality = totalQuality + quality_points[count];
        totalCredits = totalCredits + creditHours[count];

        count++;

    }

    GPA = totalQuality / totalCredits;

    cout << "Your Results\n\n";
    cout << "======================================================================================\n";
    cout << "INDEX      SUBJECT     CREDIT      SCORE       GRADE       POINT\n";
    cout << "======================================================================================\n";
    for (int i = 0; i < subjectNum; i++)
    {
    cout << i+1 << "          " << subjectName[i] << "         " << creditHours[i] << "         " << totalScore[i] << "     " << grade[i] << "      " << point[i] << "\n";

    }
    cout << "======================================================================================\n";
    cout << "Your GPA for this semester: " << GPA << "\n";
    cout << "======================================================================================\n";

    return 0;










}
