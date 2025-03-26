// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // loop
//     // while --> condition --> execute
//     // do while --> execute ---> condition
//     // for

//     // while loop
//     // int i = 0;

//     // while(i<10){
//     //     cout<<i;
//     //     i++;
//     // }

//     // int i = 0;

//     // do{
//     //     cout<<i;
//     //     i++;
//     // }while(i<10);

//     // for(int i = 0;i<10;i++){
//     //     if(i == 5){
//     //         continue;
//     //     }
//     //     cout<<i;
//     // }

    

    
//     return 0;
// }
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int userscore = 0, compscore=0;
  while (true)
  {
    srand(time(0)); 
    int b = rand();
    int a = b%10;
    int cmpimp = 0;
    // cout<<a%10;
    cout<< "1 -->paper"<<endl;
    cout<< "2 -->scissor"<<endl;
    cout<< "3 -->rock"<<endl;
    cout<<"5 -->ScoreCard"<<endl;
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
     userscore++
     }
   else if(usrinp==2 && cmpimp == 1){
    cout<<"user wins"<<endl;
    userscore++
  }
  else if(usrinp==3 && cmpimp == 2){
    cout<<"user wins"<<endl;
    userscore++
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
    compscore++
  }




}
else if(usrinp == 9){
  break;
}
else{
    cout<<"choose correct option"<<endl;
}

if(cmpimp == 1){
    cout<<"Computer --> Paper"<<endl;
}else if(cmpimp == 2){
    cout<<"Computer --> Scissor"<<endl;
    
}else if{
    cout<<"Computer --> Rock<<endl"<<endl;
    
}  
 else if (usrinp == 5) {
    cout << "----- Scoreboard -----" << endl;
    cout << "User Score: " << userScore << endl;
    cout << "Computer Score: " << compScore << endl;
} else if (usrinp == 9) {
    cout << "Exiting the program. Final Scores:" << endl;
    cout << "User: " << userScore << ", Computer: " << compScore << endl;
    break;
} else {
    cout << "Choose the correct option" << endl;
}
}
 }
  
  
 
    return 0;
}
 