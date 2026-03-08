#include<iostream>
#include<fstream>
using namespace std;

struct Library
{
    int bookID;
    string bookName;
    string author;
};

int main()
{
    Library b;

    ofstream fout("library.txt");

    cout<<"Enter Book ID: ";
    cin>>b.bookID;

    cout<<"Enter Book Name: ";
    cin>>b.bookName;

    cout<<"Enter Author Name: ";
    cin>>b.author;

    fout<<b.bookID<<" "<<b.bookName<<" "<<b.author;

    fout.close();

    ifstream fin("library.txt");

    fin>>b.bookID>>b.bookName>>b.author;

    cout<<"\nBook Details\n";
    cout<<"Book ID: "<<b.bookID<<endl;
    cout<<"Book Name: "<<b.bookName<<endl;
    cout<<"Author: "<<b.author<<endl;

    fin.close();

    return 0;
}
