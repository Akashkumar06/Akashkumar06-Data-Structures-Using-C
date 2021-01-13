#include<iostream>
using namespace std;
float mult(float a,float b)
{
    return(a*b);


}
double div(double p, double q)
{
    return(p/q);

}
int main()
{
    float x,y;
    cout<<"enter the 2 nums"<<"\n";
    cin>>x;
    cin>>y;

    cout<<"multiplication="<<mult(x,y)<<"\n";
    cout<<"divison="<<div(x,y)<<"\n";
    return 0;
}
