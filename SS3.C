main(){
 int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {
   for(j=1;j<=5;j++)
   {
     if(i==2&&j==3||i==4&&j==3)
	printf("  ");
    else  if(i==3&&j==2||i==3&&j==4)
      printf("  ");
      else
      printf(" *");
   }
   printf("\n");
   // printf("*");
 }
 getch();
}