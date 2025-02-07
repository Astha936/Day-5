#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int k=0;k<i;k++)
       { cout<<" ";}
        for(int j=row;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}