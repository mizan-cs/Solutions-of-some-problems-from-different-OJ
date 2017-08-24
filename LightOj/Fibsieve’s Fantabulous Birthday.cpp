#include<iostream>
using namespace std;

int main()
{
    int box[5][5];
    int c=1;
    int row,col;
    cout<<"[r][c]\t[r][c]\t[r][c]\t[r][c]\t[r][c]\t"<<endl;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<"["<<row<<"]["<<col<<"]\t";
            box[row][col]=c;
            c++;
        }
        cout<<endl;
    }

    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<box[row][col]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n\n\n";
    int s=5;
    row=1;
    //while(s>0){
        for(col=row; col<=s; col++){
            cout<<box[row][col]<<endl;
        }
        col=s;
        //for()
        cout<<endl<<endl<<"r"<<row<<"c"<<col;
    //}

    return 0;
}
