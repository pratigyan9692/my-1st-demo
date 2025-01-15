#include<iostream>
using namespace std;
string arr1[20],arr2[30],arr3[25],arr4[35],arr5[30];
int total=0;
void enter()
{
   int choice=0;
   cout<<"how many students do you want to enter";
   cin>>choice;
   if(total==0)
   {
   total=total+choice;
   for(int i=0;i<choice;i++)
   {
    cout<<"enter data of student"<<i++<<endl;
    cout<<"enter Name:";
    cin>>arr1[i];
    cout<<"enter Rollno:";
    cin>>arr2[i];
    cout<<"enter Course:";
    cin>>arr3[i];
    cout<<"enter Class :";
    cin>>arr4[i];
    cout<<"enter Contact:";
    cin>>arr5[i];
   }
   }
   else{
    for(int i=total;i<total+choice;i++)
   {
    cout<<"enter data of student"<<i++<<endl;
    cout<<"enter Name:";
    cin>>arr1[i];
    cout<<"enter Rollno:";
    cin>>arr2[i];
    cout<<"enter Course:";
    cin>>arr3[i];
    cout<<"enter Class :";
    cin>>arr4[i];
    cout<<"enter Contact:";
    cin>>arr5[i];

   }
   total=total+choice;
}
}
void show()
{
  if(total==0)
  {
    cout<<"no data is entered"<<endl;
  }
  else{
for(int i=0;i<total;i++)
   {
     cout<<"student data:"<<i+1<<endl;
     cout<<"Name:"<<arr1[i]<<endl;
     cout<<"Rollno"<<arr2[i]<<endl;
     cout<<"Course:"<<arr3[i]<<endl;
     cout<<"Class"<<arr4[i]<<endl;
     cout<<"Contact"<<arr5[i]<<endl;
   }
}
}
void search()
{
  if(total==0)
  {
    cout<<"no data is entered"<<endl;
  }
  else{
  string rollno;
  cout<<"enter roll of student which you want to search";
  cin>>rollno;
  for(int i=0;i<total;i++)
  {
       if(rollno==arr2[i])
     {cout<<"student data:"<<i+1<<endl;
     cout<<"Name:"<<arr1[i]<<endl;
     cout<<"Rollno"<<arr2[i]<<endl;
     cout<<"Course:"<<arr3[i]<<endl;
     cout<<"Class"<<arr4[i]<<endl;
     cout<<"Contact"<<arr5[i]<<endl;
   }
   }
}
}
void update(){
  if(total==0){
    cout<<"no data is entered"<<endl;
  }
  else{
  string rollno;
  cout<<"enter roll of student which you want to update";
  cin>>rollno;
  for(int i=0;i<total;i++)
  {
       if(rollno==arr2[i]){
     cout<<"\nprevious data"<<endl;
     cout<<"student data:"<<i+1<<endl;
     cout<<"Name:"<<arr1[i]<<endl;
     cout<<"Rollno"<<arr2[i]<<endl;
     cout<<"Course:"<<arr3[i]<<endl;
     cout<<"Class"<<arr4[i]<<endl;
     cout<<"Contact"<<arr5[i]<<endl;
     cout<<"\nEnter new data"<<endl;
     cout<<" Enter name:";
     cin>>arr1[i];
     cout<<" Enter Rollno";
     cin>>arr2[i];
     cout<<"Course:";
     cin>>arr3[i];
     cout<<"Class";
     cin>>arr4[i];
     cout<<"Contact";
     cin>>arr5[i];
     }
  }
}
}
void deleterecord(){
  if(total==0){
    cout<<"no data is entered"<<endl;
  }
  else{
  int a;
  int j;
  cout<<"press 1 to delete full record"<<endl;
  cout<<"press 2 to delete specific record"<<endl;
  cin>>a;
  if(a==1){
    total=0;
    cout<<"all the record is deleted"<<endl;
    }
  else if(a==2)
  {
    string rollno;
    cout<<"enter rollno which you want to delete"<<endl;
    cin>>rollno;
    for(int i=0;i<total;i++)
    {
      if(rollno==arr2[i])
      {
        for(j=i;j<total;j++)
        {
          arr1[j]=arr1[j+1];
          arr2[j]=arr2[j+1];
          arr3[j]=arr3[j+1];
          arr4[j]=arr4[j+1];
          arr5[j]=arr5[j+1];
        }
        total--;
        cout<<"your required report is deleted"<<endl;
      }
    }
  }
  else{
    cout<<"invalid input";
  }
}
}
main(){
    int value;
    while(true)
    {
        cout<<"press 1 to enter the data"<<endl;
        cout<<"press 2 to show the data"<<endl;
        cout<<"press 3 to search the data"<<endl;
        cout<<"press 4 to update the data"<<endl;
        cout<<"press 5 to delete  data"<<endl;
        cout<<"press 6 to exist"<<endl;
        cin>>value;
        switch(value)
        {
            case 1:
               enter();
               break;
            case 2:
               show();
               break;
            case 3:
              search();
              break;
            case 4:
              update();
              break;
            case 5:
              deleterecord();
              break;
            case 6:
              exit(0);
              break;
        }
    }
}