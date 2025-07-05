#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
#include"change.h"
#include"check.h"
char borad(char game_board[3][3]){
   /* printf("\n _  _  _    _  _  _     _  _  _  \n");
    printf("|        |           |           |\n");
    printf("|        |           |           |\n");
    printf("_  _  _  |  _  _  _  |  _  _  _  |\n");
    printf("|        |           |           |\n");
    printf("|        |           |           |\n");
    printf("_  _  _  |  _  _  _  |  _  _  _  |\n");
    printf("|        |           |           |\n");
    printf("|        |           |           |\n");
    printf("_  _  _  |  _  _  _  |  _  _  _  |\n");*/
    
    char line1[]="_  _  _    _  _  _     _  _  _  ";
    char line2[]="|        |           |           |";
    char line3[]="_  _  _  |  _  _  _  |  _  _  _  |";
    char line4[]="_  _  _  |  _  _  _  |  _  _  _  |";
    printf("\t---Tic Tac Toe---");
    for(int i=1;i<=10;i++){
        if(i==1){
            printf("\n%s\n",line1);
        }
        if(i==10){
            printf("%s\n",line4);
        }
        if(i==2||i==5||i==8){
            printf("%s\n",line2);
        }
        if(i==4||i==7){
            printf("%s\n",line3);
        }
        if(i==3){
            printf("|  %c     |    %c      |     %c     |\n",game_board[0][0],game_board[0][1],game_board[0][2]);
        }
        if(i==6){
            printf("|  %c     |    %c      |     %c     |\n",game_board[1][0],game_board[1][1],game_board[1][2]);

        }
        if(i==9){
            printf("|  %c     |    %c      |     %c     |\n",game_board[2][0],game_board[2][1],game_board[2][2]);
        }
        
    }
}

void strat_game(char game_board[3][3],int pos,int *flag){
    int j=1;
    int d=0;
    while(1){
        check_draw(game_board,&d);
        if(d==1){
            break;
        }
        if(j%2!=0){
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            borad(game_board);
            check(game_board,flag);
            
        }
        else{
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            borad(game_board);
            check(game_board,flag);
        }
        //printf("flag:%d",*flag);
        if(*flag==1){
        printf("\n\t---Game End---\n");
        break;
        }
        j++;
    }
}
int main(){
    const char Player1='X';
    const char Player2='O';
    int flag=0;
    int pos=0,turn=0;
    char game_board[3][3]={'1','2','3','4','5','6','7','8','9'};
    while(1){
        char game_board[3][3]={'1','2','3','4','5','6','7','8','9'};
        for(int i=1;i<=5;i++){
            if(i==3){
                printf("\tLoading.....\n");
            }
            else{
                printf("\t- - - - - - \n");
            }
        }
        printf("\tLet start Tic Tac Toe!\n");
        printf("\tPlayers are you ready?\n");
        int r=0;
        printf("\tenter '1' to start game\n\tif enter any value game will end\n");
        printf("Enter:");
        scanf("%d",&r);
        if(r==1){
            borad(game_board);
            strat_game(game_board,pos,&flag);
        }
        else{
            printf("\n\t # # #---Game End---# # #\n");
            break;
        }
        //break;
    }
}