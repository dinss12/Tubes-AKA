#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a, k, c, d, g ;
    int size = 10;
    int max = 200;
    int b[size];

    std::srand(std::time(nullptr));
    for (int &v : b ) v = std::rand() % max + 1;

    cout<<"Selection sort"<<endl;
    cout<<"mengurutkan nilai dari besar ke kecil"<<endl;
    for(a=0; a<size; a++)
    {
        cout<<b[a]<<endl;
    }
    for(a=0; a<size-1; a++)
    {
    c=a;
        for(d=a+1; d<size; d++)
        {
            if(b[c]<b[d])
            {
                c=d;
            }
        }
        g =b[c];
        b[c] = b[a];
        b[a] = g;
    }
    cout<<"\n setelah diurutkan akan menjadi : \n";
    for(a=0; a<size; a++)
    {
        cout<<b[a]<<" \n";
    }
}
