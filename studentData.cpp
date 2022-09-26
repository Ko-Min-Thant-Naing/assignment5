#include<iostream>
#include<conio.h>
using namespace std;

int i=0;

struct student {

    int id;
    string name,address;
    int mark;

}s[30];

void insertData(){
    system("cls");
    cout<<"\t\tPlease Insert student data\n"<<endl;
    cout<<"\tEnter student Id: ";
    cin>>s[i].id;

    cout<<"\tEnter student name: ";
    cin>>s[i].name;

    cout<<"\tEnter student address: ";
    cin>>s[i].address;

    cout<<"\tEnter student mark: ";
    cin>>s[i].mark;

    cout<<"\tInsert record successfully!"<<endl;

}

void searchData(){
    //student s;
    system("cls");
    cout<<"\t*** Search Students Data By Id ***"<<endl<<endl;

    if(i==0){
        cout<<"No record found!"<<endl;
    }
    else{
        int id;
        int found=0;
        cout<<"\tEnter studeng Id: "<<endl;
        cin>>id;
        for(int a=0;a<i;a++){
            if(id==s[a].id){
                cout<<"Student Name: "<<s[a].name;
                cout<<"Student Address: "<<s[a].address;
                cout<<"Student Mark: "<<s[a].mark;
                found++;
            }
        }
        if(found==0){
            cout<<"Student Id not found!"<<endl;
        }
    }


}

void show(){

    system("cls");
    cout<<"\tShow all data***"<<endl;

    if(i==0){
        cout<<"\tNo record found!"<<endl;
    }
    else{
        for(int a=0;a<i;a++){
            cout<<"\tStudend id: "<<s[a].id;
            cout<<"\tStudend name: "<<s[a].name;
            cout<<"\tStudend address: "<<s[a].address;
            cout<<"\tStudend mark: "<<s[a].mark;
            cout<<"\n\t**********************";
        }
    }

}

int main()
{
    p:
    system("cls");
    int choice;

    cout<<"\n\t*Student Data* \n"<<endl;
    cout<<"\t1. Insert student data "<<endl;
    cout<<"\t2. Show students data "<<endl;
    cout<<"\t3. Search student data "<<endl;
    cout<<"\t4. Exit"<<endl;
    cout<<"\tEnter your choice: ";
    cin>>choice;
    cout<<endl;

    switch(choice)
    {

    case 1:
        insertData();
        break;
    case 2:
        show();
        break;
    case 3:
        searchData();
        break;
    case 4:
        exit(0);
    default:
        cout<<"\t Invalid Choice!!";



    }
    getch();
    goto p;
}
