#include<iostream>
using namespace std;

double average(int arr[],int size)
{
    int i,sum=0;
    double avg;
    for(i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    avg = double(sum)/size;
    return avg;

}

int main()
{
    int arr[6] = {12,39,82,75,60,9};
    double avg;
    avg = average(arr,6);
    cout<<"Average value is -> "<<avg<<endl;
    return 0;
}