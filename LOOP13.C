main(){
int i,j;
clrscr();
for(i=1;i<=4;i++)
{
  for(j=1;j<=4;j++)
  {
  if(i==j)
   printf("*");
   else
   printf("%d",j);
  }
  printf("\n");
}
getch();
}