//221.2410.1927x204
#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
class game
{
  int user,ucont=0,com,ccont=0,i,j;
public:
  void gmplay()
  {
    system("Color 3F");
    cout<<"Hey Let's Play A Game...."<<endl;
    getch();
    system("Color 20");
    cout<<"It's Called Rock Paper Scissors Spock Lizard"<<endl;
    getch();
    cout<<"Rules Are Pretty Simple"<<endl;
    getch();
    system("Color 0E");
    cout<<"Rock Breaks Scissors, Scissors Cuts Paper"<<endl;
    getch();
    cout<<"Paper Catches Rock(Somehow)"<<endl;
    getch();
    cout<<"Spock's Hands Beats Scissors"<<endl<<"Lizard Eats Spock"<<endl;
    getch();
    cout<<"Rock Tears Lizard In Half"<<endl;
    getch();
    system("Color 50");
    cout<<"Just......"<<endl;
    getch();
    cout<<"Don't Ask How"<<endl;
    getch();
    system("Color 4F");
    cout<<"Spock Sits On Rock"<<endl;
    getch();
    cout<<"Paper Wraps Spock, Scissors Blinds Lizard"<<endl;
    getch();
    cout<<"And Finally Lizard Makes The Paper Wet By Licking It"<<endl;
    getch();
    system("Color 7C");
    cout<<endl<<"Now The Menu"<<endl;
    getch();
    cout<<"1) Rock"<<endl<<"2) Paper"<<endl<<"3) Scissors"<<endl<<"4) Spock"<<endl<<"5) Lizard"<<endl<<"6) Don't Wanna Play"<<endl;
  }
  void gme()
  {
    i=0;
    while (i!=6) {
    cout<<"Enter Your Choice"<<endl;
    cin>>user;
    i=user;
      if (i!=6){
    srand(time(0));
    com=rand() %5;
    cout<<com<<endl;
    if ((user==1 && com==3)||(user==1 && com==5)||(user==2 && com==1)||(user==2 && com==4)||(user==3 && com==2)||(user==3 && com==5)||(user==4 && com==1)||(user==4 && com==3)||(user==5 && com==2)||(user==5 && com==4)){
    cout<<"You Win"<<endl;
    for (j=0;j<30;j++)
    {
    system("Color 4F");  system("Color F4");
    }
    system("Color 7C");
    ucont=ucont+1;
    } else if (user==com){
      cout<<"Draw"<<endl;
    } else if (user==6) {
      i=6;
    } else if (user>6){
      cout<<"Invalid Choice"<<endl;
    }else{
      cout<<"You Lose"<<endl;
      for (j=0;j<30;j++)
      {
      system("Color 0F");  system("Color F0");
      }
      system("Color 7C");
      ccont=ccont+1;
      }
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<"Next Game"<<endl;
      getch();
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<"Menu"<<endl;
      getch();
    cout<<"1) Rock"<<endl<<"2) Paper"<<endl<<"3) Scissors"<<endl<<"4) Spock"<<endl<<"5) Lizard"<<endl<<"6) Don't Wanna Play...Just Show The Scores"<<endl;
}
}
     if (ucont!=0 || ccont!=0){
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<"Player       - "<<ucont<<endl;
     cout<<"Computer     - "<<ccont<<endl;
   }
         cout<<"             THE END"<<endl;
         getch();
  }
};
int main()
{
  game opt;
  opt.gmplay();
  opt.gme();
  return 0;
}
