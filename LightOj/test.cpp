#include<iostream>
using namespace std;

int main()
{
    int s=5;
    int box[5][5];
    int m=1;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            box[i][j]=m;
            m++;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<box[i][j]<<"\t";
        }
        cout<<endl;
    }


    cout<<"\n\n";
    int row=0,col;
    int line_count=0;
    while()){
            for(col=0;col<s;col++){
                cout<<box[row][col]<<endl;
            }

            col--;
            for(row=row+1;row<s;row++){
                cout<<box[row][col]<<endl;
            }
            line_count++;

            col=col-line_count;
            for(row=row-1;row>=line_count;row--){
                cout<<box[row][col]<<endl;
            }

            row=row+line_count;
            for(col=col-line_count;col>=0;col--){
                cout<<box[row][col]<<endl;
            }
            line_count++;
    }


    return 0;
}

