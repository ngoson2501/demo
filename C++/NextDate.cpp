#include<iostream>
using namespace std;

void NextDate2(int y){  
    if(y % 400 == 0 || y % 4 == 0){
        cout<<"nam nhuan"<<endl;
    }else{
        cout<<"ko phai nam nhuan"<<endl;
    }
}




void NextDate(int d, int m, int y){  
    if(1<= d<=31 && 1<=m<=12 && 1812<= y <= 2012)  {
        if(y % 400 == 0 || y % 4 == 0){
            if(m==2 && d == 28){
                cout<<"nam nhuan"<<endl;
                cout<<d+1<<"/"<<m<<"/"<<y<<endl;
            }
            
            else if(m==2 && d==29){
                cout<<"nam nhuan"<<endl;
                cout<<1<<"/"<<m+1<<"/"<<y<<endl;
            }else{
                if(m % 2== 0 && d == 30){
                    if(m==12){
                        d=1;
                        m=1;
                        y +=1;
                        NextDate2(y);
                        cout<<d<<"/"<<m<<"/"<<y<<endl;
                    }else{
                        cout<<"nam nhuan"<<endl;
                        cout<<1<<"/"<<m+1<<"/"<<y<<endl;
                    }           
                }else if(m % 2== 0 && d == 31){
                    cout<<"moi ban nhap lai";
                }
                else if(m %2 == 1 && d ==31){
                    cout<<"nam nhuan"<<endl;
                    cout<<1<<"/"<<m+1<<"/"<<y<<endl;
                }else if(m %2 == 1 && d ==30){
                    cout<<"nam nhuan"<<endl;
                    cout<<d+1<<"/"<<m<<"/"<<y<<endl;
                }else{
                    cout<<"nam nhuan"<<endl;
                    cout<<d+1<<"/"<<m<<"/"<<y<<endl;
                }
            }
        }

        /* else if(y % 4 == 0 && y % 100 != 0){ */
            else{
                if(m % 2== 0 && d == 30){
                    if(m==12){
                        d=1;
                        m=1;
                        y +=1;
                        NextDate2(y);
                        cout<<d<<"/"<<m<<"/"<<y<<endl;
                    }else{
                        cout<<"ko phai nam nhuan"<<endl;
                        cout<<1<<"/"<<m+1<<"/"<<y<<endl;
                    }
                }else if(m % 2== 0 && d == 31){
                    cout<<"moi ban nhap lai";
                }else if(m %2 == 1 && d ==31){
                    cout<<"ko phai nam nhuan"<<endl;
                    cout<<1<<"/"<<m+1<<"/"<<y<<endl;
                }else if(m %2 == 1 && d ==30){
                    cout<<"ko phai nam nhuan"<<endl;
                    cout<<d+1<<"/"<<m<<"/"<<y<<endl;
                }else{
                    cout<<"ko phai nam nhuan"<<endl;
                    cout<<d+1<<"/"<<m+1<<"/"<<y<<endl;
                }
            }

        
    }else{
        cout<<"moi ban nhap lai";
    }
}





int main(){

    int day, month, year;
    cout<<"\nMoi ban nhap Day: ";
    cin>>day;
    cout<<"Moi ban nhap Month: ";
    cin>>month;
    cout<<"Moi ban hap Year: ";
    cin>>year;

    NextDate(day, month, year);
    
    return 0;
}