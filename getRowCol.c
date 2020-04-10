void getRowCol(int *x, int *y){
	char f[20],temp[50];
	int a, b;
	
	printf("Masukkan nama file : ");
	gets(f);
	FILE *fp = fopen( f , "r");
	
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