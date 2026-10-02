#include<iostream>
using namespace std;
class Pattern
{
    public:
    int n,i=1;
    void getData()
    {
        cout<<"Enter a number: ";
        cin>>n;
    }
    void printPattern()
    {
       while(i<=n)
       {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        i++;
       }
    }

};
int main()
{
    Pattern p;
    p.getData();
    p.printPattern();
    return 0;
}