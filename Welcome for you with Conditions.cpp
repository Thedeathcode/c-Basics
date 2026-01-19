#include <iostream>

using namespace std;

int main()
{
int x,y,z;
cin>>x>>y>>z;
if(x<y&&x<z){cout<<x<<"\n";
 if(y<z){cout<<y<<"\n"<<z<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z<<"\n";}

}
else if(y<x&&y<z){cout<<y<<"\n";
 if(x<z){cout<<x<<"\n"<<z<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z<<"\n";}


}
if(z<y&&z<x){cout<<x<<"\n";
 if(x<y){cout<<y<<"\n"<<z<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z<<"\n";}


}
 else if(x<y&&x<z){cout<<x<<"\n";
 if(z<y){cout<<z<<"\n"<<y<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z<<"\n";}

 else if(y<x&&y<z){cout<<x<<"\n";
 if(z<x){cout<<z<<"\n"<<x<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z<<"\n";}

else if(z<y&&z<x){cout<<x<<"\n";
 if(y<x){cout<<y<<"\n"<<x<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z<<"\n";}

}

 }
 }
}
