main(){
 int i,j;
 clrscr();
 for(i=1;i<=4;i++)
 {
  for(j=1;j<=i;j++)
  { if(j%2==1)
     printf("1");
     else
     printf("0");
  }
  printf("\n");
 }
 getch();
}