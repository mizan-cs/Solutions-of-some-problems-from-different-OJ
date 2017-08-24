#include<bits/stdc++.h>
using namespace std;

int GCD( int a, int b )
{
if( b == 0 ) return a;

if( a < b ) swap( a, b );
int r = a % b;
return GCD( b, r );
}
int main()
{

}
