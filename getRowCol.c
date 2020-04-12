void getRowCol(int *x, int *y, FILE *fp){
	char temp[50];
	int a, b;

	// Membaca data banyak baris
	fgets(temp, sizeof(temp), fp);
	sscanf(temp, "%d", &a);
//	printf("%s\n",ans);
//	printf("%d\n",a);
	*x=a;

	// Membaca data banyak kolom
	fgets(temp, sizeof(temp), fp);
	sscanf(temp, "%d", &b);
//	printf("%s\n",ans);
//	printf("%d\n",b);
	*y=b;
}
