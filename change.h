#ifndef CHANGE_H
#define CHANGE_H

void change1(char game_board[3][3],int pos){
    switch(pos){
        case 1:
        if(game_board[0][0]=='X'||game_board[0][0]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            break;
        }
            game_board[0][0]='X';
        break;
        case 2:
        if(game_board[0][1]=='X'||game_board[0][1]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            break;
        }
        game_board[0][1]='X';
        break;
        case 3:
        if(game_board[0][2]=='X'||game_board[0][2]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            break;
        }
        game_board[0][2]='X';
        break;
        case 4:
        if(game_board[1][0]=='X'||game_board[1][0]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            break;
        }
        game_board[1][0]='X';
        break;
        case 5:
        if(game_board[1][1]=='X'||game_board[1][1]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            break;
        }
        game_board[1][1]='X';
        break;
        case 6:
        if(game_board[1][2]=='X'||game_board[1][2]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            break;
        }
        game_board[1][2]='X';
        break;
        case 7:
        if(game_board[2][0]=='X'||game_board[2][0]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            break;
        }
        game_board[2][0]='X';
        break;
        case 8:
        if(game_board[2][1]=='X'||game_board[2][1]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            break;
        }
        game_board[2][1]='X';
        break;
        case 9:
        if(game_board[2][2]=='X'||game_board[2][2]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            break;
        }
        game_board[2][2]='X';
        break;
        default:
            printf("\n\t'Player1'-->'X' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change1(game_board,pos);
            break;
        
    
    }
}
void change2(char game_board[3][3],int pos){
    switch(pos){
        case 1:
        if(game_board[0][0]=='X'||game_board[0][0]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            break;
        }
        game_board[0][0]='O';
        break;
        case 2:
        if(game_board[0][1]=='X'||game_board[0][1]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            break;
        }
        game_board[0][1]='O';
        break;
        case 3:
        if(game_board[0][2]=='X'||game_board[0][2]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            break;
        }
        game_board[0][2]='O';
        break;
        case 4:
        if(game_board[1][0]=='X'||game_board[1][0]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            break;
        }
        game_board[1][0]='O';
        break;
        case 5:
        if(game_board[1][1]=='X'||game_board[1][1]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            break;
        }
        game_board[1][1]='O';
        break;
        case 6:
        if(game_board[1][2]=='X'||game_board[1][2]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            break;
        }
        game_board[1][2]='O';
        break;
        case 7:
        if(game_board[2][0]=='X'||game_board[2][0]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            break;
        }
        game_board[2][0]='O';
        break;
        case 8:
        if(game_board[2][1]=='X'||game_board[2][1]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            break;
        }
        game_board[2][1]='O';
        break;
        case 9:
        if(game_board[2][2]=='X'||game_board[2][2]=='O'){
            printf("You can't change this position\n");
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            break;
        }
        game_board[2][2]='O';
        break;
        default:
            printf("\n\t'Player2'-->'O' enter poistion b/w 1 to 9:");
            scanf("%d",&pos);
            change2(game_board,pos);
            break;
    }
}

#endif