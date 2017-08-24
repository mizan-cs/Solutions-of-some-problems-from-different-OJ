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
    //while(size>0){
            for(col=0;col<s;col++){
                cout<<box[row][col]<<endl;
            }
            cout<<endl<<row<<col<<endl<<endl;

            col=col-1;
            for(row=row+1;row<s;row++){
                cout<<box[row][col]<<endl;
            }
            //line_count++;
            cout<<endl<<"Line Completed: "<<line_count<<endl<<row<<col<<endl<<endl;

            col=col-1;
            for(row=row-1;row>line_count;row--){
                cout<<box[row][col]<<endl;
            }
            cout<<endl<<"Line Completed: "<<line_count<<endl<<row<<col<<endl<<endl;

    }


    return 0;
}
