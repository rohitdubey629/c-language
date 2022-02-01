main(){

int i=1,j,k=0,num;
clrscr();
printf("Enter the number");
scanf("%d",&num);
i=1;
while(i<num/2)

{
if(num%i==0)
 k=k+i;
 i++;
}
 if(k==num)
 printf("Perfect number %d",k);
 else
 printf("Not Perfect number %d",k);
 getch();

}