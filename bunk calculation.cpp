#include<iostream>
using namespace std;

int main()
{
    double total_Classes, total_Classes_Attended, total_percentage_required;

    cout << "Enter the total number of classes: ";
    cin >> total_Classes;

    cout << "Enter the total number of classes you have attended: ";
    cin >> total_Classes_Attended;

    cout << "Enter the total attendance percentage required: ";
    cin >> total_percentage_required;

    double attendance_percentage = (total_Classes_Attended / total_Classes) * 100;

    if (attendance_percentage >= total_percentage_required) {
        cout << "You are in the safe zone. Your attendance percentage is: " << attendance_percentage << "%" << endl;
    } 
    else 
    {
        cout << "Your attendance percentage is low: " << attendance_percentage << "%" << endl;
    }

    double required_classes_to_attend = (total_percentage_required / 100) * total_Classes;

    double bunkable_classes = total_Classes_Attended - required_classes_to_attend;

    if(attendance_percentage < total_percentage_required )
    {
        cout << "You have to attend at least " << required_classes_to_attend - total_Classes_Attended << " more classes." << endl;
    }
    else 
    {
        cout << "You can bunk " << bunkable_classes << " classes." << endl;
    }
 
    return 0;
}