#include <iostream>
#inlude <cmath>

using namespace std;

int x,R,D,o1,o2;

int main()
{
    cin>>R;
    cin>>D;

    o1=abs(x-R);
    o2=abs(x-D);

    if(o1<o2) cout<<"Wygral R!"; else if(o2<o1) cout<<"Wygral D!"; else cout<<"Remis!";

    return 0;
}
