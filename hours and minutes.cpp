#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World\n";
    int min,hour;
    cout<<"Enter MINUTES: \n";
    cin>>min;
    hour=min/60;
    min=min%60;
    cout<<"THE HOURS IS = "<<hour<<"\nTHE MINUTES IS = "<<min;
    return 0;
}