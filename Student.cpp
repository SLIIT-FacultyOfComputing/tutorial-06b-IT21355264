#include "Student.h"
#include <iostream>
#include<string.h>
using namespace std;

// Assign studentId and name
void Student:: assignDetails(int no,char name[])
{
  studentId=no;
  strcpy(studentName,name);
  
}

// Display StudentId and Name
void Student::display() 
{
  cout<<"Student id\t:"<<studentId<<endl;
  cout<<"Student name\t:"<<studentName<<endl;
}
