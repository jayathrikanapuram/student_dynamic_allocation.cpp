#include<bits/stdc++.h>
using namespace std;
class Student{
private:
int rollNumber;
string name;
float marks;
public;
Student(){
rollNumber = 0;
name = " ";
marks = 0.00;
}
void input(){
    cout << "Enter Roll Number : ";
cin >> rollNumber;
cin.ignore();
cout<<"Enter name : ";
getline(cin, name);
cout << "Enter marks : ";
cin >> "marks";
    }
void display(){
    cout << rollNumber << "\t" << name << "\t" << marks<< endl;
}
~Student(){
cout<< " Student object with roll number "<<rollNumber<<"is destroyed";
}
};
int main(){
    int n;
cout<<"Enter no.of students";
cin>>n;
Student *Students = newstudent[n];
for(int i = 0; i < n; i++){
cout<<"\n Enter details of student " << i+1<<endl;
Students[i].input();
}
cout<<"\nRollNo\tName\tMarks\n";
for(int i = 0; i < n; i++){
student[i].display();
}
delete[] Students;
return 0;
}

