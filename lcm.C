	//wrong
main(){
 int i,num1,num2,t=1,min,p,r=1;
 clrscr();
 printf("Enter the first number");
 scanf("%d",&num1);
 printf("Enter the second number");
 scanf("%d",&num2);
//min=(num1<num2) ? num1 : num2;
 for(i=1;i<=num2;i++)
 {

   if(num1%i==0&&num2%i==0)

    t=t*i;
    else if(num1%i==0||num2%i==0)
    r=r*i;

}
p=r*t;
printf("%d",p);
 getch();
}