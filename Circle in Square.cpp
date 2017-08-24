#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double pi=2*acos(0.0);

    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        long double r,circle_area=0.0,box_area=0.0,shaded_area=0.0;
        cin>>r;
        box_area=(r+r)*(r+r);
        circle_area=pi*r*r;
        shaded_area=box_area-circle_area;

        cout<<"Case "<<i<<": "<<shaded_area<<endl;
    }

    return 0;
}
