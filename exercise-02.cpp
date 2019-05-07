/*
Nama Program        :Exercise-02
Nama                :Daniel Rama H.
NPM                 :140810180045
Tanggal buat        :07-05-2019
Deskripsi Program   :Reverse Stack linked list
*/

#include<iostream>
using namespace std;
struct stack{
  char isi;
  stack* next;
};
typedef stack* pointer;
typedef pointer List;
void createlist(List& TOP){
  TOP=NULL;
}
void createElmt(pointer& pBaru){
  pBaru= new stack;
  cout<<"Masukan huruf :"; cin>>pBaru->isi;
  pBaru->next=NULL;
}
void push(List& TOP,pointer pBaru){
  if(TOP==NULL){
    TOP=pBaru;
  }
  else{
    pBaru->next=TOP;
    TOP=pBaru;
  }
}
void pop(List& TOP,pointer pHapus){
  if(TOP==NULL){
    cout<<"list kosong";
  }
  else{
    pHapus=TOP;
    TOP=pHapus->next;
    pHapus->next=NULL;
    cout<<pHapus->isi<<" ";
  }
}
void traversal(List TOP){
  pointer pBantu;
  pBantu=TOP;
  while(pBantu!=NULL){
    cout<<pBantu->isi<<" ";
    pBantu=pBantu->next;
  }
}
main(){
  pointer pb,ph;
  List q;
  int n;
  createlist(q);
  cout<<"Masukan jumlah huruf:";cin>>n;
  for(int i=0;i<n;i++){
    createElmt(pb);
    push(q,pb);
  }
  traversal(q); //cout traversal

  for(int i=0;i<n;i++)
    {
    pop(q,ph); //cout pop
    }
}
