#include <iostream>

using namespace std;

double calCGPA(double arr[],int n)
{
    double sum=0;
    for(int i=0;i<n;i++)
    {
        arr[i]/=10;
        sum+=arr[i]; 
    }
    cout<<"CGPA:-";
    double CGPA=sum/n;
    cout<<CGPA<<endl;
    cout<<"percentage="<<CGPA*9.5<<endl;
    
    return CGPA;
}

int main() {
    double arr[100];
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    string subject;
    cout<<"Enter the subjects:"<<endl;
    for(int j=0;j<n;j++)
    {
        cin>>subject;
    }
    cout<<"Enter the marks obtained in per subject:"<<endl;
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    calCGPA(arr,n);
    
}