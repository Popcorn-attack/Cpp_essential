#include<iostream>
#include<stdio.h>
using namespace std;


bool fibon_elem(int pose,int &elem)
{
    if (pose<0||pose>1000)
    { elem = 0; return false;    }
    elem = 1;
    int n1 =1, n2 =1;
    for (int i =1;i<=pose;i++)
    {
        elem = n2+n1;
        n2 = n1;
        n1 = elem;
    }
    return true;
}



int main(void){
    int pos;
    cout<<"input a position"<<endl;
    cin>>pos;

    int elem;
    if (fibon_elem(pos,elem))
    cout<<elem<<endl;
}