#include <stdio.h>

int main(){
    int vote;
    int x=0,y=0,z=0,c=1;
    char a;

    while(c){
    printf("Enter 1 to vote for Samarpan\nEnter 2 to vote for Aarav\nEnter 3 to vote for Vedant\nYour choice: ");
    scanf("%d",&vote);
    if(vote==1){
    x++;
    }
    else if(vote==2){
    y++;
    }
    else if(vote==3){
    z++;
    }
    else{
    printf("Invalid vote!\n");
    }

    printf("Enter 'N' to exit! OR 'Y' to continue\n");
    scanf(" %c",&a);

    if (a=='N'||a=='n'){
    c = 0;
    }
    else if(a=='y'||a=='Y'){
    c = 1;
    }
    else{
    printf("Invalid input! Exiting...\n");
    c = 0;
    }
    }
    printf("\n--- Voting Results ---\n");
    printf("Samarpan: %d\n",x);
    printf("Aarav: %d\n",y);
    printf("Vedant: %d\n",z);
    if(x==y && y==z){
    printf("It's a TIE between Samarpan, Aarav and Vedant!\n");
    }
    else if(x==y && x>z){
    printf("It's a TIE between Samarpan and Aarav!\n");
    }
    else if(x==z && x>y){
    printf("It's a TIE between Samarpan and Vedant!\n");
    }
    else if(y==z && y>x){
    printf("It's a TIE between Aarav and Vedant!\n");
    }
    else if(x>y && x>z){
    printf("Samarpan is the winner!\n");
    }
    else if(y>x && y>z){
    printf("Aarav is the winner!\n");
    }
    else{
    printf("Vedant is the winner!\n");
    }
    printf("\nConcluding the CR voting process!\n");
    return 0;
}
