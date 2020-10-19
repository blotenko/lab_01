#include <iostream>
using namespace std;
#include "lib_zadacha_1_and_9_.hpp"

unsigned long long factorial(unsigned long long n){
    int i;
    unsigned long long res;
    res = 1;
    for (i = 1; i <= n; i++) {
      res = res * i;
    }
    return res;
}
void zadacha_1(){
    unsigned long long a;
   cout<<"Введите число : ";
   cin>>a;
   a = factorial(a);
   cout<<"Факториал  этого числа равен : "<<a<<endl;

   int num = 0;
   int num1 = 0;
   int num2 = 0;
   int num3 = 0;
   int num4 = 0;

   if(a%2==0){
       while(a%2==0){
           a = a/2;
           num++;
       }
   
       cout<<"(2;"<<num<<")"<<" ";
   }
   if(a%3==0){
       while(a%3==0){
           a=a/3;
           num1++;
       }
       cout<<"(3;"<<num1<<")"<<" ";
   }
   if(a%5==0){
       while(a%5==0){
           a = a/5;
           num2++;
       }
       cout<<"(5;"<<num2<<")"<<" ";
   }
   if(a%7==0){
       while(a%7==0){
           a = a/7;
           num3++;
       }
       cout<<"(7;"<<num3<<")"<<" ";
   }
   if(a%11==0){
       while(a%11==0){
           a = a/11;
           num4++;
       }
       cout<<"(11;"<<num4<<")"<<endl;
   }
   
   cout<<"("<<a<<";"<<"1)"<<endl;
}
void menuNum(){
    int menuNumber;
    cout<<"Виберите пункт меню : "<<endl;
    cout<<"1.zadacha_1"<<endl;
    cout<<"2.zadacha_9"<<endl;

    cout<<"Введите номер задания : ";
    cin>>menuNumber;
    
    
    switch (menuNumber) {
        case 1: zadacha_1();
            break;
        case 2: zadacha_9();
            break;
        default:"Error";
            break;
    }
}





int a,b;
int* ostatki;
int* period;
unsigned int len;

int IsInOstatki(int ost,int len)
{
for(int i=0;i<len-1;i++)
{
if(ostatki[i]==ost)return i;
}
return 0;
}

int zadacha_9()
{
    cout<<"Введите числитель : ";
cin>>a;
cout<<"Введите знаменатель : ";
cin>>b;
ostatki=new int[b+1];
period=new int[b+1];

int d=a,q=b;
int r,pos;
len=1;

do
{
r=d%q;
ostatki[len]=r;

d/=q;
period[len]=d;

d=10*r;
len++;
}
while((pos=IsInOstatki(r,len))==0);

cout<<"Дробь  : ";
cout<<period[1]<<",";
for(r=2;r<len;r++)
{
cout<<period[r];
}
    cout<<endl;
cout<<"Период  : (";
    for(r=pos+1;r<len;r++){
    cout<<period[r];
    }
cout<<")";
cout<<endl;
    delete[] ostatki;
    delete[] period;
return 0;
}




