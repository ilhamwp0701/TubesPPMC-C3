void arrayGenerator(int row, int col ,char arr[col][row] ,FILE *fp){
	
	int i,j;
	char temp[50];
	printf("Berhasil");
	
	for(j=0; j<row ; j++){
		fgets(temp, sizeof(temp), fp);
		printf("%s",temp);
		printf("j = %d\n", j);
		for(i=0; i<col ; i++){
			printf("i = %d\n", i);
			arr[col][row] =temp[i];
//			count+=(arr[i][j]=='x');
		}
	}
}