#include <iostream>
#include <cstdlib>

using namespace std;

int main() {



  int Player2HP=6969;
  int Round=0;
  int SuperAttack;
  int LightAttack;
  int Player1Heal;
  int Player2Heal;
  int SuperAttack2;
  int LightAttack2;
  int Player1HP=6969;



cout<<"1 Wizzard"<<endl;
cout<<"2 Dwarf"<<endl;
cout<<"3 warrior"<<endl;
int x;
cin>>x;

  /*  int v1 = rand() % 100; 

    if (attack<25)
    {attack} */


      //PLAYER 1
 
 switch (x) {
    case 1:
      //wizzard
    Player1HP=100;
    SuperAttack=80;
    LightAttack=40;
    Player1Heal=75;
   
      break;
    case 2:  
     //Dwarf
     Player1HP=200;
     SuperAttack=40;
     LightAttack=20;
     Player1Heal=50;

      break;
      
    case 3:
     
     Player1HP=300;
     SuperAttack=60;
     LightAttack=30;
     Player1Heal=25;

      break;

       default:
       Player1HP=200;
     SuperAttack=40;
     LightAttack=20;
      
      } 
     
system("clear");

cout<<"Player 2 choose class"<<endl;
      //PLAYER 2
cin>>x;
       switch (x) {
    case 1:
      //wizzard
    Player2HP=100;
    SuperAttack2=80;
    LightAttack2=40;
    Player2Heal=75;
   
      break;
    case 2:  
     //Dwarf
     Player2HP=200;
     SuperAttack=40;
     LightAttack=20;
     Player2Heal=50;

      break;
      
    case 3:
     //Warrior
     Player2HP=300;
     SuperAttack=60;
     LightAttack=30;
     Player2Heal=25;

      break;  
      } 


int br;
int br2;
string a;



while (Player2HP>0 || Player1HP>0 )
{
    system("clear");

  // UVOD
  cout<<"Ako stisnes 1 health, ako stisnes 2 LightAttack!, a 3 je Super Attack!"<<endl;
   cout<<"Round: " <<Round<<endl;
  cout<<"Player 1 " <<Player1HP<<endl;
  cout<<"Player 2 " <<Player2HP<<endl;
  

  cin>>br;

 

//PLAYER 1
      
  switch (br) {
    case 1:
       Player1HP+=Player1Heal;
       break;
    case 2:  
      cout << "LightAttack!";
      Player2HP-=LightAttack;
      break;
      
    case 3:
      cout << "Super Attack!"<<endl;
      Player2HP-=SuperAttack;
      break;
              } 
   
      cout<<"_______________________"<<endl;
     cout<<"player 2 Turn"<<endl;
 //PLAYER 2    
 cin>>br2;  
 
  switch (br2) {
    case 1:
       Player2HP+=Player2Heal;
      break;
    case 2:  
      cout << "LightAttack!";
      Player1HP-=LightAttack2;
      break;
      
    case 3:
      cout << "Super Attack!"<<endl;
      Player1HP-=SuperAttack2;
      break;

              }

  Round++;


}


if(Player1HP<0)
{
  //player 2 won
  cout<<"Player 2 Won the game"<<endl;
}

else 
{
  //player 1 won
cout<<"Player 1 Won the game"<<endl;

}

cout<<"game over"<<endl;




} 




