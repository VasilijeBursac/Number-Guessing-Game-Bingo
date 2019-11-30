#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int exit;

    cout<<"**Welcome to Number Guessing Game!**"<<endl<<endl;
    cout<<"Your choice: "<<endl;
    cout<<"1-New Game"<<endl;
    cout<<"0-Exit Game"<<endl;
    cin>>exit;

    while(exit!=0)
    {
        int attempts=0;
        int number, choice;
        srand (time(NULL));
        number = rand() % 10 + 1;//remainders when dividing by 10 can be 0,1,2,..,9
                            // add 1 to get computer generated number from 1 to 10


        do
        {
            cout<<"Enter your number between 1 and 10: "<<endl;
            cin>>choice;
            if(choice < 1 || choice > 10)
            {
                cout<<"Wrong input! You must enter number between 1 and 10: "<<endl<<endl;
            }
        }
        while(choice <1 || choice > 10);


        while(choice!=number)
        {
            cout<<"Wrong! Please try again!"<<endl;
            //cout<<"Enter your number: "<<endl;
            //cin>>choice;
             do
             {
                cout<<"Enter your number between 1 and 10: "<<endl;
                cin>>choice;
                if(choice < 1 || choice > 10)
                {
                    cout<<"Wrong input! You must enter number between 1 and 10: "<<endl<<endl;
                }
             }
            while(choice <1 || choice > 10);
            attempts=attempts+1;
        }

        cout<<"CORRECT! WELL DONE!"<<endl<<endl;
        attempts=attempts+1;//to count last attempt-attempt in which you’ve guessed the number


        cout<<"*Generated number: "<<number<<endl;
        cout<<"*Your number: "<<choice<<endl;
        cout<<"**Number of attempts: "<<attempts<<endl;

        cout<<"------------------------------------------"<<endl;
        cout<<"1-New Game"<<endl;
        cout<<"0-Exit Game"<<endl;
        cin>>exit;
    }

    cout<<"------------------------------------------"<<endl;
    cout<<"**End of the Game!**"<<endl;
    cout<<"**Thanks for playing!**"<<endl;
    return 0;

}
