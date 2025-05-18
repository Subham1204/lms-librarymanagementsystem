#include<iostream>
#include<string.h>

using namespace std;
class library {
public:

    char books[100];
    int id;
    char student[200];
    void welcomelms();
    void inputdata();
    void printdata();

};
void library::welcomelms() {
    cout<<"Welcome to the library Management System"<<endl;
}
void library::inputdata() {
    char choice[10];
    cout<<"Do u want to eneter library data?"<<endl;
    cin>>choice;
    if (strcmp(choice,"yes")==0) {
        cout<<"welcome to adding books student and ids"<<endl;
        cout<<"Enter student name"<<endl;
        cin>>student;
        cin.getline(student,200);

        cout<<"Enter book id"<<endl;
        cin>>id;
        cout<<"enter books name"<<endl;
        cin>>books;
        cin.getline(books,100);

    }else {
        cout<<"No data entered"<<endl;
    }
}


void library::printdata() {
    cout<<"---------Library Data-------------"<<endl;
    cout<<books<<endl;
    cout<<id<<endl;
    cout<<student<<endl;
}

int main() {
    library lib;
    lib.welcomelms();
    lib.inputdata();
    lib.printdata();
    return 0;
}