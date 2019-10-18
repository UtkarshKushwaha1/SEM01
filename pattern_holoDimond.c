#include <stdio.h>
int main(){
    int n=9;
    int c=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x = i+j;
            if(i<=(n/2)){
                if(x==4 && i ==0)
                    printf("X");
                else if(i!=0){
                    if(x==4 || x==c){
                        printf("X");
                    }
                    else
                        printf(" ");
                
                }
                else
                {
                    printf(" ");
                }   
            }
            else {
                if(x==12 || x==(c-8)){
                    printf("X");
                }
                else
                {
                    printf(" ");
                }
                
            } 
        }
        c=c+2;
        printf("\n");
    }
    return 0;
}