/*
Nama Program        :Exercise-01
Nama                :Daniel Rama H.
NPM                 :140810180045
Tanggal buat        :07-05-2019
Deskripsi Program   :Reverse Stack array
*/

#include<iostream>
using namespace std;
const int maxElemen=255;
struct stack{
    char isi[maxElemen];
    int TOP;
    char hapus[maxElemen];
};
stack S;

void createStack(stack& S)
{
    S.TOP=-1;
}
void push(stack& S, char elemenBaru, int n)
{
    if(S.TOP==n-1)
    {
        cout<<"Sudah penuh"<<endl;
    }
    else
    {
        S.TOP=S.TOP+1;
        S.isi[S.TOP]=elemenBaru;
    }
}
void pop(stack& S, int n)
{
    if(S.TOP<0)
    {
        cout<<"Sudah kosong"<<endl;
    }
    else
    {
        for(int i=n;i>=0;i--)
        {
        S.hapus[i]=S.isi[S.TOP];
        S.TOP=S.TOP-1;
        }
    }
}
main()
{
    char baru;
    int n;
    createStack(S);
    cout<<"Masukkan jumlah huruf: ";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Masukkan huruf :";cin>>baru;
        push(S,baru,n);
    }
    for(int i=0;i<S.TOP;i++)
    {
        pop(S,n);
    }
    for(int i=n;i>0;i--)
    {
        cout<<S.hapus[i]<<endl;
    }
}

