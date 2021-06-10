// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

int main()
{
    int maxValue,maxIndex;
    int findMax[6];

    cout<<"Enter 6 numbers : ";
    cin>>findMax[0];
    cin>>findMax[1];
    cin>>findMax[2];
    cin>>findMax[3];
    cin>>findMax[4];
    cin>>findMax[5];

    maxValue = findMax[0];
    maxIndex = 0;
     for(int i=0; i<6; i++) {
         if(maxValue <= findMax[i]) {
             maxValue = findMax[i];
             maxIndex = i;
         }
     }
     cout<<"\nMaximum Value: "<<maxValue<<endl;
     cout<<"Index number for the maximum value: "<<maxIndex<<endl;
    return 0;
}

