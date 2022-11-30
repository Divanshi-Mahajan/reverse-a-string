#include<iostream>
using namespace std;
int main(){
    /*char str[100];
    cout<<"enter a string "<<endl;
    cin>>str;//it only prints divanshi and not mahajan basically here cin stops working after space therefore we use the next one
    cin.get(str,100);
    cout<<str;
    */
   //if we want to use getline
   string str;
   cout<<"enter a string "<<endl;
   getline(cin,str);
   for(int i=0;i<str.length();i++){
    if(str[i]=='a'|| str[i]=='A'){
        continue;
    }
    else if(str[i]=='e'|| str[i]=='E'){
        continue;

    }
    else if(str[i]=='i'|| str[i]=='I'){
        continue;

   }
   else if(str[i]=='o'|| str[i]=='O'){
    continue;

   }
   else if(str[i]=='u'|| str[i]=='U'){
    continue;
   }
   else{//if no vowels
    cout<<str[i];
   }
   }
    

}