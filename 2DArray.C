/*Tyler Allen
CS111
Lab 10-2
3-25-15
This program will output their scores along with the labels and the average for each test and each student*/

#include <iostream>
#include <iomanip>
using namespace std;
const int NUM_TESTS=3;
const int NUM_STUDENTS=5;

void fillArray(int ar[][NUM_STUDENTS]);
void outputArray(const int ar[][NUM_STUDENTS]);

int main(){
  int array[NUM_TESTS][NUM_STUDENTS];
  fillArray(array);
  outputArray(array);

  return 0;
}

void fillArray(int ar[][NUM_STUDENTS])
{
  for(int c=0;c<NUM_TESTS;c++)
    {
      cout<<"Enter score for Test #"<<c+1<<endl;
      
      for(int r=0;r<NUM_STUDENTS;r++)
	{
	  cout<<"Student #"<<r+1<<" ";
	  cin>>ar[c][r];
	}
    }
}

void outputArray(const int ar[][NUM_STUDENTS])
{
  int total=0;
  double avg;
  cout<<endl<<setw(8)<<"Test#";
    for(int i=0;i<NUM_STUDENTS;i++)
    {
      cout<<setw(10)<<"Stu "<<i+1;
    }
    cout<<setw(8)<<"Average"<<endl;

     for(int test=0;test<NUM_TESTS;test++)
    {
      total=0;
      cout<<endl<<setw(8)<<test+1;
      for(int student=0;student<NUM_STUDENTS;student++)
	{
      total+=ar[test][student];
	  cout<<setw(12)<<ar[test][student];
	}
  avg=(double)total/NUM_STUDENTS;
    cout<<setw(8)<<fixed<<setprecision(1)<<avg;
    }

     cout<<endl<<setw(12)<<"Average";
  for(int s=0;s<NUM_STUDENTS;s++)
    {
      total=0;
      for(int t=0;t<NUM_TESTS;t++)
	{
      total+=ar[t][s];
	}
      avg=(double)total/NUM_TESTS;
      cout<<setw(12)<<fixed<<setprecision(1)<<avg;
      }
}
