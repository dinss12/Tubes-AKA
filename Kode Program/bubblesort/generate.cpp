#include<iostream>
#include<stdlib.h>
#include<time.h>
#include "generate.h"


void generaterandom(int i, int rnum, int amount, int first, int last){
    int i, int rnum, int amount, int first, int last;
    cout<<"Enter the Interval: ";
    cin>>first>>last;
    cout<<"How many Random Numbers to Generate ? ";
    cin>>amount;
    cout<<"\nList of "<<amount<<" Random Numbers Between "<<first<<" and "<<last;
    srand(time(0));
    for(i=0; i<amount; i++)
    {
        rnum = rand()%(last+1-first)+first;
        cout<<endl<<rnum;
    }
    cout<<endl;
    return 0;
}
