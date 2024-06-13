#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter a full name :";
    //cin>>name;
    getline(cin, name);
    for (int i=1; i<=20; ++i)
    {
        cout<< "Hello  "<<name <<endl;

    }
}