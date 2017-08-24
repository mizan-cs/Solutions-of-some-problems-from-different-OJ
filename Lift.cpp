#include<iostream>
using namespace std;

int main()
{
    int up_down=4,close_open=3,enter_exit=5;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int total_time=0;
        int my_position,lift_position;
        cin>>my_position>>lift_position;

        //Lift come to my Position
        if(lift_position>my_position){
                while(lift_position!=my_position){
                total_time+=up_down;
                lift_position--;
            }
        }
        else if(my_position==lift_position){
            total_time=0;
        }
        else{
                while(lift_position<=my_position){
                total_time+=up_down;
                lift_position++;
            }
        }

        //Open and close lift
        total_time+=close_open*2;
        total_time+=enter_exit;
        //up_down=4,close_open=3,enter_exit=5;

        //make my position on floor
        while(my_position!=0){
            total_time+=up_down;
            my_position--;
        }

        //lift open
        total_time+=close_open;
        //i Exit form lift
        total_time+=enter_exit;

        cout<<"Case "<<i<<": "<<total_time<<endl;
    }

    return 0;
}
