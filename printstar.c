#include<stdio.h>
int main(){
int i,n;    
int printstar(int n){
    for(i=0;i<n;i++){
        printf("%c",'*');
    }
}
printstar(10);

return 0;
}