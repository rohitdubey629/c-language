main(){
 int i,j;
 clrscr();
 for(i=5;i>=1;i--)
 {
  for(j=5;j>=1;j--)
  {
   if(i>j)
   printf("%d",i);
   else
   printf("%d",j);
  }
  printf("\n");
 }
 getch();
}