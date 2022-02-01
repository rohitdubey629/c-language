/* strong number ex=145
    5*4*3*2*1=120
    4*3*2*1  = 24
    1        =  1
    Result   =145=145
*/
main()
{
   int j, rem, num, num2, sum = 1, t = 0, r, i;
   clrscr();
   printf("Enter the number");
   scanf("%d", &num);
   printf("Enter the second number");
   scanf("%d", &num2);
   while (num < num2)
      r = num;
   {
      for (i = 1; i <= num; i++)
         rem = num % 10;
      sum = 1;
      for (j = 1; j <= rem; j++)
      {
         sum = sum * j;
      }
      num = num / 10;
      t = t + sum;
      if (r == t)
         printf("Strong number %d", r);
   }
   getch();
}