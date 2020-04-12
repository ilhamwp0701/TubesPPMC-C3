void tick(matriks,row,col){
    int i,j;
    char nextgen[row][col];

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(matriks[i][j]=="x"){
                if(chek_neighbour()==2 || chek_neighbour()==3){
                    nextgen[i][j]="x";
                }
                else{
                    nextgen[i][j]="-";
                }
            }
            else{
                if(chek_neighbour()==3){
                    nextgen[i][j]="x";
                }
                else{
                    nextgen[i][j]="-";
                }
            }
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            matriks[i][j]=nextgen[i][j];
        }
    }
}
