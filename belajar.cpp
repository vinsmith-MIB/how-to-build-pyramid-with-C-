#include<iostream>
#include<math.h>
//header
using namespace std;

int main(){
    int n;
    cout<<"masukkan tinggi piramida : ";
    cin>>n;

    /* 
    0 =   012345
    1 =   012345
    2 =   012345
    3 =   012345
    4 =   012345
    5 =   012345
     */


    for (int a = 0; a  < n; a++) //0, 1, 2, 3, 4, 5
    {
        for (int b = 0; b < a; b++) //0, 1, 2, 3, 4
        {
            cout<<"-";
        }

        for (int c = a; c < n; c++) //0, 1, 2, 3, 4, 5
        {
            cout<<"* ";
        }

        for (int d = 0; d < a; d++)
        {
            cout<<"-";
        }
        cout<<endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout<<"-";
        }

        for (int k = i; k >= 1; k--)
        {
            cout<<"* ";
        }

        for (int d = n; d > i; d--)
        {
            cout<<"-";
        }
        cout<<endl;
    }
}