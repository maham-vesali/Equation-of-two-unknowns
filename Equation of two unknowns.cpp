#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
 
int main()
{
cout<<"lotfan zarayebe ra vared koni";
int a,b,c;
 cout<<"\n\n"<<"a=";
 cin>>a;
  cout<<"\n"<<"b=";
  cin>>b;
   cout<<"\n"<<"c=";
   cin>>c;
if(a==0||b==0||c==0)
cout<<"\n"<<"zarayeb bayad mokhalefe sefr bashad.";
  else{
cout<<"\n"<<"moadele be soorate zir ast:\n\n";
cout<<a<<"*x*x + "<<b<<"*x + "<<c<<" = 0\n\n";

float delta,x1,x2;
delta=(b*b-(4*a*c));
if(delta<0)
cout<<"moadele risheye haghighi nadarad.";
else if(delta==0)
{
cout<<"moadele risheye mozaaf darad.";
x1=(-b/(2*a));
cout<<"\n\n"<<"x="<<x1;
}
else{
cout<<"moadele do risheye haghighi darad.";
x1=((-b+sqrt(delta))/(2*a));
x2=((-b-sqrt(delta))/(2*a));
cout<<"\n\n"<<"x1="<<x1<<"\t"<<"x2="<<x2;
}//end of enternal else
}//end of external else
cout<<"\n\n\n"<<"press any key to exit...";
getch();
return 0;
}  
