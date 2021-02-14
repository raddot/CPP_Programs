#include<iostream>
using namespace std;

int main()
{
    string s1 = "Radhika";
    string s2 = "Dotihal";
    string s3;
    s3 = s1;
    cout<<"String s3 is ->"<<s3<<endl;
    s3 = s1+" "+s2;
    cout<<"String s3 is ->"<<s3<<endl;
    cout<<"Length of a string s3 is ->"<<s3.length();
    return 0;
}