#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
 

  
    srand(time(0)); 
    int b = rand();
    int a = b%10;
    int cmpimp = 0;
    // cout<<a%10;
    cout<< "1 -->paper"<<endl;
    cout<< "2 -->scissor"<<endl;
    cout<< "3 -->rock"<<endl;
    cout<< "9 -->quit"<<endl;

    if(a<=3){
        cmpimp = 1;
    }else if(a<=6){
        cmpimp = 2;
    }else{
        cmpimp = 3;
    }
//take user input
int usrinp = 0;
cin>>usrinp;
if (usrinp == 1 || usrinp==2 || usrinp ==3)
{
   if(usrinp==1 && cmpimp == 3){
     cout<<"user wins"<<endl;
   }
   else if(usrinp==2 && cmpimp == 1){
    cout<<"user wins"<<endl;
  }
  else if(usrinp==3 && cmpimp == 2){
    cout<<"user wins"<<endl;
  }
  else if(usrinp==1 && cmpimp == 1){
    cout<<"Tie"<<endl;
  }
  else if(usrinp==2 && cmpimp == 2){
    cout<<"Tie"<<endl;
  }
  else if(usrinp==3 && cmpimp == 3){
    cout<<"Tie"<<endl;
  }
  else{
    cout<<"Comp Wins"<<endl;
  }




}

else{
    cout<<"choose correct option"<<endl;
}

if(cmpimp == 1){
    cout<<"Computer --> Paper"<<endl;
}else if(cmpimp == 2){
    cout<<"Computer --> Scissor"<<endl;
    
}else{
    cout<<"Computer --> Rock<<endl"<<endl;
    
}
  

 
    return 0;
}
 




