//********************************************* Display Function ***************************************************************************
struct symbols
{
	char s;
};
struct symbols sym[100];
display()
{
	char arr[]={'~','#','^','@','%','$','*'},ch;
	int i=0,j=swapping();
	while(i<100){
		if(j==7)
			j=0;
		sym[i++].s=arr[j++];
	}
	sym[0].s=sym[11].s=sym[22].s=sym[33].s=sym[44].s=sym[55].s=sym[66].s=sym[77].s=sym[88].s=sym[99].s=arr[swapping()];
	if(j==2||j!=5||j!=0)
	  sym[7].s=sym[33].s=sym[25].s=sym[65].s='&';
	  system("cls");
printf("\t+---------------------------------------------------------------------+\n");
printf("\t|  90  |  91  |  92  |  93  |  94  |  95  |  96  |  97  |  98  |  99  |\n");
printf("\t|      |      |      |      |      |      |      |      |      |      |\n");
printf("\t|  %c   |   %c  |   %c  |  %c   |   %c  |   %c  |   %c  |   %c  |   %c  |   %c  |\n",sym[99].s,sym[98].s,sym[97].s,sym[96].s,sym[95].s,sym[94].s,sym[93].s,sym[92].s,sym[91].s,sym[90].s);
printf("\t+------+------+------+------+------+------+------+------+------+------+\n");
printf("\t|  89  |  88  |  87  |  86  |  85  |  84  |  83  |  82  |  81  |  80  |\n");
printf("\t|      |      |      |      |      |      |      |      |      |      |\n");
printf("\t|  %c   |   %c  |   %c  |  %c   |   %c  |   %c  |   %c  |   %c  |   %c  |   %c  |\n",sym[80].s,sym[81].s,sym[82].s,sym[83].s,sym[84].s,sym[85].s,sym[86].s,sym[87].s,sym[88].s,sym[89].s);
printf("\t+------+------+------+------+------+------+------+------+------+------+\n");
printf("\t|  70  |  71  |  72  |  73  |  74  |  75  |  76  |  77  |  78  |  79  |\n");
printf("\t|      |      |      |      |      |      |      |      |      |      |\n");
printf("\t|  %c   |   %c  |   %c  |  %c   |   %c  |   %c  |   %c  |   %c  |   %c  |   %c  |\n",sym[79].s,sym[78].s,sym[77].s,sym[76].s,sym[75].s,sym[74].s,sym[73].s,sym[72].s,sym[71].s,sym[70].s);
printf("\t+------+------+------+------+------+------+------+------+------+------+\n");
printf("\t|  69  |  68  |  67  |  66  |  65  |  64  |  63  |  62  |  61  |  60  |\n");
printf("\t|      |      |      |      |      |      |      |      |      |      |\n");
printf("\t|  %c   |   %c  |   %c  |  %c   |   %c  |   %c  |   %c  |   %c  |   %c  |   %c  |\n",sym[60].s,sym[61].s,sym[62].s,sym[63].s,sym[64].s,sym[65].s,sym[66].s,sym[67].s,sym[68].s,sym[69].s);
printf("\t+------+------+------+------+------+------+------+------+------+------+\n");
printf("\t|  50  |  51  |  52  |  53  |  54  |  55  |  56  |  57  |  58  |  59  |\n");
printf("\t|      |      |      |      |      |      |      |      |      |      |\n");
printf("\t|  %c   |   %c  |   %c  |  %c   |   %c  |   %c  |   %c  |   %c  |   %c  |   %c  |\n",sym[59].s,sym[58].s,sym[57].s,sym[56].s,sym[55].s,sym[54].s,sym[53].s,sym[52].s,sym[51].s,sym[50].s);
printf("\t+------+------+------+------+------+------+------+------+------+------+\n");
printf("\t|  49  |  48  |  47  |  46  |  45  |  44  |  43  |  42  |  41  |  40  |\n");
printf("\t|      |      |      |      |      |      |      |      |      |      |\n");
printf("\t|  %c   |   %c  |   %c  |  %c   |   %c  |   %c  |   %c  |   %c  |   %c  |   %c  |\n",sym[40].s,sym[41].s,sym[42].s,sym[43].s,sym[44].s,sym[45].s,sym[46].s,sym[47].s,sym[48].s,sym[49].s);
printf("\t+------+------+------+------+------+------+------+------+------+------+\n");
printf("\t|  30  |  31  |  32  |  33  |  34  |  35  |  36  |  37  |  38  |  39  |\n");
printf("\t|      |      |      |      |      |      |      |      |      |      |\n");
printf("\t|  %c   |   %c  |   %c  |  %c   |   %c  |   %c  |   %c  |   %c  |   %c  |   %c  |\n",sym[39].s,sym[38].s,sym[37].s,sym[36].s,sym[35].s,sym[34].s,sym[33].s,sym[32].s,sym[31].s,sym[30].s);
printf("\t+------+------+------+------+------+------+------+------+------+------+\n");
printf("\t|  29  |  28  |  27  |  26  |  25  |  24  |  23  |  22  |  21  |  20  |\n");
printf("\t|      |      |      |      |      |      |      |      |      |      |\n");
printf("\t|  %c   |   %c  |   %c  |  %c   |   %c  |   %c  |   %c  |   %c  |   %c  |   %c  |\n",sym[20].s,sym[21].s,sym[22].s,sym[23].s,sym[24].s,sym[25].s,sym[26].s,sym[27].s,sym[28].s,sym[29].s);
printf("\t+------+------+------+------+------+------+------+------+------+------+\n");
printf("\t|  10  |  11  |  12  |  13  |  14  |  15  |  16  |  17  |  18  |  19  |\n");
printf("\t|      |      |      |      |      |      |      |      |      |      |\n");
printf("\t|  %c   |   %c  |   %c  |  %c   |   %c  |   %c  |   %c  |   %c  |   %c  |   %c  |\n",sym[19].s,sym[18].s,sym[17].s,sym[16].s,sym[15].s,sym[14].s,sym[13].s,sym[12].s,sym[11].s,sym[10].s);
printf("\t+------+------+------+------+------+------+------+------+------+------+\n");
printf("\t|   9  |   8  |   7  |   6  |   5  |   4  |   3  |   2  |   1  |   0  |\n");
printf("\t|      |      |      |      |      |      |      |      |      |      |\n");
printf("\t|  %c   |   %c  |   %c  |  %c   |   %c  |   %c  |   %c  |   %c  |   %c  |   %c  |\n",sym[0].s,sym[1].s,sym[2].s,sym[3].s,sym[4].s,sym[5].s,sym[6].s,sym[7].s,sym[8].s,sym[9].s);
printf("\t+------+------+------+------+------+------+------+------+------+------+\n");
printf("\nPress  ENTER to see output:: ");
while(ch!=13)
		{ 
    	ch=getch();}
//*************************************************** cases to select file *****************************************************************
	switch(sym[11].s)
	{
		system("cls");
		case '~': display_file("a.txt");
				break;
		case '#': display_file("b.txt");
				break;
		case '%': display_file("e.txt");
				break;
		case '@': display_file("d.txt");
				break;
		case '$': display_file("f.txt");
				break;
		case '*': display_file("g.txt");
				break;
		case '^': display_file("c.txt");
				break;
	}
	printf("\n\nPress Any KEY to Play again:: ");
	while(ch==13)
	 ch=getch();
	 system("cls");
	 display();	
}
//*********************************************************** Functions to Open txt files ***************************************************
display_file(char name[])
{
	FILE *tut;
	char ch;
	tut=fopen(name,"r");
	ch=fgetc(tut);
	while(ch!=EOF)
	{
		usleep(300);
		printf("%c",ch);
		ch=fgetc(tut);
	} fclose(tut);
}
//****************************************************************** End of file ***********************************************************
