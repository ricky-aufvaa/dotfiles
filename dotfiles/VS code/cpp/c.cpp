#include <iostream>
using namespace std;

int main() {
    int T;
    scanf("%d",&T);
    while(T--){
        int X,Y,A,B,K;
        scanf("%d%d%d%d%d",&X,&Y,&A,&B,&K);
        for(int n=0;n<K;n++){
            X=X+A;
            Y=Y+B;
        }
        if(X==Y){
            cout<<"SAME PRICE";
        else if(X>Y)    {   
            cout<<"DIESEL";
        }
        else if(Y>X){
            cout<<"PETROL";
        }
        }
    }
    
#include <iostream>
using namespace std;

int main() {
    int T;
    scanf("%d",&T);
    while(T--){
        int X,Y,A,B,K;
        scanf("%d%d%d%d%d",&X,&Y,&A,&B,&K);
        for(int n=0;n<K;n++){
            X=X+A;
            Y=Y+B;
        }
        if(X>Y){
            cout<<"DIESEL"<<endl;
            
        }
        else if(X>Y)    {   
        
            cout<<"PETROL"<<endl;
        
         }
        else if(Y==X){
            cout<<"SAME PRICE"<<endl;
        
        }
    }
    

return 0;
}

}