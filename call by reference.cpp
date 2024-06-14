#include<iostream>

using namespace std;
void change (int &n)
{
    n=n*n;
    cout<< "value in function :"<<n<<endl;
}
int main ()
{
    int n;
    cout<<"enter a value";
    cin>>n;
    change(n);
    cout<<"value in main :"<<n;
    return 0;

}