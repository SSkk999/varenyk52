using namespace std;
#include <iostream>
#include <string>

struct MyStruct
{
    string name;
    string surname;
    string surname1;
    unsigned int rating = 1;
    unsigned int rating1 = 1;
    unsigned int rating2 = 1;
    unsigned int rating3 = 1;
    unsigned int rating4 = 1;
};

void  output(MyStruct& sd1){
    int sum;
    cout << "Name: " << sd1.name << endl;
    cout << "Surname: " << sd1.surname << endl;
    cout << " Surname1: " << sd1.surname1 << endl;
    cout << "Ratings: " << sd1.rating << ", " << sd1.rating1 << ", "
        << sd1.rating2 << ", " << sd1.rating3 << ", " << sd1.rating4 << endl;



}
MyStruct students[10] = {
    {"Bogdan", "Karvalo", "Char", 4, 6, 8, 9, 2},
    {"Anna", "Ivanova", "Petrova", 5, 7, 6, 8, 7},
    {"Sergey", "Sidorov", "Pavlov", 9, 8, 7, 9, 10}
};

void  avarege(MyStruct& sd1) {
    int sum = 0;
    int sum1 = 0;
        sum += sd1.rating;
        sum += sd1.rating1;
        sum += sd1.rating2;
        sum += sd1.rating3;
        sum += sd1.rating4;
    
    sum1 =sum / 5;

    cout << sum1;
    


}

void  addstudents(MyStruct& sd1) {
    
    cout << "enter name:";
    getline(cin, sd1.name);
    cout << "\n";
    cout << "enter surname:";
    cout << "\n";
    getline(cin, sd1.surname);
    cout << "\n";
    cout << "enter surname1:";
    cout << "\n";
    getline(cin, sd1.surname1);
    cout << "\n";
    cout << "rating:";
    cout << "\n";
    cin >> sd1.rating;
    cout << "\n";
    cout << "rating1:";
    cout << "\n";
    cin >> sd1.rating1;
    cout << "\n";
    cout << "rating2:";
    cout << "\n";
    cin >> sd1.rating2;
    cout << "\n";
    cout << "rating3:";
    cout << "\n";
    cin >> sd1.rating3;
    cout << "rating4:";
    cin >> sd1.rating4;
  
    MyStruct students[4] = { sd1.name,  sd1.surname,sd1.surname1,sd1.rating,sd1.rating1,sd1.rating2,sd1.rating3,sd1.rating4 };



}

void  ivegrades(MyStruct& sd1) {
    int students1 = 0;
    cout << "which student to assign grades to:";
    cin >> students1;
    for (int i = 0; i < students1; i++)
    {
        if (students1 == students[i]) {
            cout << "rating:";
            cout << "\n";
            cin >> sd1.rating;
            cout << "\n";
            cout << "rating1:";
            cout << "\n";
            cin >> sd1.rating1;
            cout << "\n";
            cout << "rating2:";
            cout << "\n";
            cin >> sd1.rating2;
            cout << "\n";
            cout << "rating3:";
            cout << "\n";
            cin >> sd1.rating3;
            cout << "rating4:";
            cin >> sd1.rating4;
            students[i] = { sd1.rating,sd1.rating1,sd1.rating2,sd1.rating3,sd1.rating4 };
        }
    }



}






void choice(MyStruct& sd){
    cout << "1-Fill in the structure \n 2-Output of information \n3-Print average score \n 4-Add a student  \n 5-Give grades to the student \n 6-Output of the list of students \n 7-Print grades of a particular student \n 8-Print debtors" << endl;
    int selection = 0;
    cout << "selection:";
    cin >> selection;
    switch (selection)
    {
    case 1: {
            cout << "enter name:";
            getline(cin, sd.name);
            cout << "\n";
            cout << "enter surname:";
            cout << "\n";
            getline(cin, sd.surname);
            cout << "\n";
            cout << "enter surname1:";
            cout << "\n";
            getline(cin, sd.surname1);
            cout << "\n";
            cout << "rating:";
            cout << "\n";
            cin >> sd.rating;
            cout << "\n";
            cout << "rating1:";
            cout << "\n";
            cin >> sd.rating1;
            cout << "\n";
            cout << "rating2:";
            cout << "\n";
            cin >> sd.rating2;
            cout << "\n";
            cout << "rating3:";
            cout << "\n";
            cin >> sd.rating3;
            cout << "rating4:";
            cin >> sd.rating4;
            break;
        }
    case 2: {

       
        output(sd);
        break;
    }
    case 3: {
        avarege(sd);
    }
    case 4: {
        addstudents(sd);
    }
    case 5: {
        ivegrades(sd);
    }

    default:
        break;
    }
}
int main()
{
    MyStruct v3{ "Bogdan", "Karvalo", "Char", 4, 6, 8, 9, 2 };
    choice(v3);
}

