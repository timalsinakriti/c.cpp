#include<iostream>
 using namespace std;
 main()
 {
    int num;
    cout<<"enter a number :";
    cin >> num;
    for(int i=1; i<=10; ++i)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
 }