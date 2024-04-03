#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;


bool fibon_elem(int pose,int &elem)
{
    if (pose<=0||pose>1000)
    { elem = 0; return false;    }
    elem = 1;
    int n1 =1, n2 =1;
    for (int i =3;i<=pose;i++)
    {
        elem = n2+n1;
        n1 = n2;
        n2 = elem;
    }
    return true;
}
bool print_fibon(int pos)
{

    if (pos<=0||pos>1000)
    {return false;}
    int n1=1,n2=1;
    int elem =1;
    for (int i =3;i<pos;i++)
    {
        cout<<elem<<' ';
        elem = n1+n2;
        n1 = n2;
        n2 = elem;
    }
    cout<<endl;
    return true;
}
void print_msg(ostream &os,const string &msg)
{
    if (msg.empty())
    return ;
    os<<msg;
}

void display_vector(vector<int> vec)
{
    for (int i = 0; i<vec.size();++i)
        cout<<vec[i]<<' ';
    cout<<endl;
}





int main(void){
    int pos;
    cout<<"input a position"<<endl;
    cin>>pos;

    int elem;
    if (fibon_elem(pos,elem))
    {cout<<elem<<endl;};;
    if (print_fibon(pos))
    return 0 ;
}