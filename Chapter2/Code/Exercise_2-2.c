enum boolean (NO, YES); //first name in an enum has value 0, the next 1, and so on. 
enum boolean okloop = YES;
i=0;
while(okloop == YES)
if(i >= lim-1)
okloop = NO;
else if ((c=getchar()) == '\n')
okloop = NO;
else if(c == EOF)
okloop = NO;
else 
{
s[i]=c;
++i;
}
