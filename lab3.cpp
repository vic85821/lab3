#include<iostream>
#include"lab3.h"

using namespace std;

void lab3::setData()
{
    ifstream inFile("file.in",ios::in);
    if(!inFile){
	cerr<<"Failed opening"<<endl;
	exit(1);
    }
    inFile>>num;
    while(inFile>>data)
    {
        weight.push_back(data);
    }
}

void lab3::sor()
{
    sort(weight.begin(),weight.end());
}

void lab3::calculate()
{
    int sum=0;
    for(int i=num-1;i>num-6;i--)
    {
	sum+=weight.at(i);
    }
    cout<<sum<<endl;
}
