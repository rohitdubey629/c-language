main(){
 int i,j;
 clrscr();
 for(i=9;i>=1;i=i-2)
 {
  for(j=1;j<=i;j=j+2)
  {
     printf("%d",j);
  }
  printf("\n");
 }
 getch();
}