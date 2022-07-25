#include<iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;

    if(w%2==0 && w>2 && w>=1 && w<=100){

        cout<<"yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}
