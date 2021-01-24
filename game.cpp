#include <iostream>
#include<string>
using namespace std;
int main()
{
    cout <<"!! NOTE:ENTER ALL DETAILS IN CAPITAL CASE"<<endl <<"ENTER THE NAMES OF ALL 4 PLAYERS:-" << endl;
    string name[4][1];
    for (int i = 0; i < 4; i++)
    {
        cin >> name[i][0];
    }
    string slips[4][1];
    slips[0][0] = "RAJA";
    slips[1][0] = "MANTRI";
    slips[2][0] = "SIPAHI";
    slips[3][0] = "CHOR";
    for(int i=3;i>0;i--){
        srand(time(0));
        int a= rand()%i;
        swap(name[i][0],name[a][0]);
    }

    //for(int i=0;i<4;i++)
//{cout<<name[i][0]<<endl;}
// FOR CHECKING CODE (FIRST PRINT SHUFFLED ARRAY)

    cout<<name[0][0]<<" IS "<<slips[0][0]<<endl;
    cout<<name[1][0]<<" IS "<<slips[1][0]<<endl;
    cout<<"NOW IT IS TURN OF MANTRI TO GUESS SIPAHI AND CHOR FROM REMAINING TWO PLAYERS!"<<endl;

    cout<<"GUESS WHO IS SIPAHI"<<endl;
    string sipahi;
    cin>>sipahi;

    cout<<"GUESS WHO IS CHOR"<<endl;
    string chor;
    cin>>chor;

    if(name[2][0]== sipahi)
    {cout<<"THE PREDICTION MADE BY MANTRI IS RIGHT."<<endl<<"HENCE FINAL SCORES OF ALL PLAYERS ARE:-"<<endl;
         cout<<"SCORE OF "<<name[0][0]<<" IS 1500."<<endl;
  cout<<"SCORE OF "<<name[1][0]<<" IS 1000."<<endl;
  cout<<"SCORE OF "<<name[2][0]<<" IS 800."<<endl;
  cout<<"SCORE OF "<<name[3][0]<<" IS 0."<<endl;  

    }
    else
    {cout<<"THE PREDICTION MADE BY MANTRI IS WRONG."<<endl<<"HENCE FINAL SCORES OF ALL PLAYERS ARE:-"<<endl;
         cout<<"SCORE OF "<<name[0][0]<<" IS 1500."<<endl;
  cout<<"SCORE OF "<<name[1][0]<<" IS 0."<<endl;
  cout<<"SCORE OF "<<name[2][0]<<" IS 800."<<endl;
  cout<<"SCORE OF "<<name[3][0]<<" IS 1000."<<endl;}
    return 0;
}
