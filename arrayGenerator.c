void arrayGenerator(int row, int col ,char *arr ,FILE *fp){

	int i,j;
	char temp[col+2];

	for(j=0; j<row ; j++){
		fgets(temp, sizeof(temp), fp);
		printf("%s",temp);
		printf("j = %d\n", j);
		for(i=0; i<col ; i++){
			printf("i = %d\n", i);
			*((arr+j*col) + i) =temp[i];
//			count+=(arr[i][j]=='x');
		}
	}
}
