#ifndef CHECK_H
#define CHECK_H
void check(char game_board[3][3],int *flag){
    if(game_board[0][0]=='X'&&game_board[0][1]=='X'&&game_board[0][2]=='X'
    ||game_board[0][0]=='X'&&game_board[1][1]=='X'&&game_board[2][2]=='X'
    ||game_board[0][0]=='X'&&game_board[1][0]=='X'&&game_board[2][0]=='X'
    ||game_board[0][1]=='X'&&game_board[1][1]=='X'&&game_board[2][1]=='X'
    ||game_board[0][2]=='X'&&game_board[1][2]=='X'&&game_board[2][2]=='X'
    ||game_board[1][0]=='X'&&game_board[1][1]=='X'&&game_board[1][2]=='X'
    ||game_board[2][0]=='X'&&game_board[2][1]=='X'&&game_board[2][2]=='X'
    ||game_board[2][0]=='X'&&game_board[1][1]=='X'&&game_board[0][2]=='X'){
        printf("\t---player1 is winner--\n");
        *flag=1;
    }
    if(game_board[0][0]=='O'&&game_board[0][1]=='O'&&game_board[0][2]=='O'
    ||game_board[0][0]=='O'&&game_board[1][1]=='O'&&game_board[2][2]=='O'
    ||game_board[0][0]=='O'&&game_board[1][0]=='O'&&game_board[2][0]=='O'
    ||game_board[0][1]=='O'&&game_board[1][1]=='O'&&game_board[2][1]=='O'
    ||game_board[0][2]=='O'&&game_board[1][2]=='O'&&game_board[2][2]=='O'
    ||game_board[1][0]=='O'&&game_board[1][1]=='O'&&game_board[1][2]=='O'
    ||game_board[2][0]=='O'&&game_board[2][1]=='O'&&game_board[2][2]=='O'
    ||game_board[2][0]=='O'&&game_board[1][1]=='O'&&game_board[0][2]=='O'){
        printf("\t---player2 is winner--\n");
        *flag=1;
    }
}
void check_draw(char game_board[3][3],int *d){
    int k=0;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            if(game_board[i][j]=='X'||game_board[i][j]=='O'){
                k++;
            }
        }
    }
    if(k==9){
        printf("--- Draw the match---\n");
        *d=1;
    }
    else{
        *d=0;
    }
}
#endif