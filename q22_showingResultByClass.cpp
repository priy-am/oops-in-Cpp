#include <iostream>
using namespace std;

class Subject
{
private:
    string subjectName;
    int marks;

public:
    void enterMarks()
    {
        cout << "Enter the subject name: ";
        cin >> subjectName;
        cout << "Enter the marks obtained: ";
        cin >> marks;
    }
    void displayMarks(){
         cout << "Subject: " << subjectName << endl;
            cout << "Marks: " << marks << endl;
    }
};

int main(int argc, char const *argv[])
{
     Subject sub;
     sub.enterMarks();
     sub.displayMarks();
    return 0;
}
