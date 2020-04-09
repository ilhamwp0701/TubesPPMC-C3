void ReadFile(int *row, int *col){
	int i,j; //,row,col;
	char f[20], temp[50];
	printf("Masukkan nama file : ");
	gets(f);
	FILE *fp = fopen( f , "r");
	
	// Membaca data banyak baris
	fgets(temp, sizeof(temp), fp);
	sscanf(temp, "%d", *row);
//	printf("%s\n",ans);
//	printf("%d\n",*row);
	
	// Membaca data banyak kolom
	fgets(temp, sizeof(temp), fp);
	sscanf(temp, "%d", *col);
//	printf("%s\n",ans);
//	printf("%d\n",*col);
	
	char arr[*col][*row];
	for(j=0; j<*row ; j++){
		fgets(temp, sizeof(temp), fp);
		printf("%s",temp);
		for(i=0; i<*col ; i++){
			arr[i][j]=temp[i];
		}
	}
}
