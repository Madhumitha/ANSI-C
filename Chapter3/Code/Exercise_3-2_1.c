void escape(char s[], char t[])
{
//copy the string t to string s 
int i,j;
for(i=0,j=0;t[i]!='\0',i++)
{
switch(t[i])
{
case '\n':
s[j++]='\\';
s[j++]='n';
break;
case '\t':
s[j++]='\\';
s[j++]='t';
break;
default:
s[j++];
break;
}
s[j]='\0';
}
}
