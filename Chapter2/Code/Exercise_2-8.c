unsigned rightrot(unsigned x, int n)
{
int wordlength();
int rbits;
if((n=n%wordlength()>0)
{
rbits = (~(~0<<n)&x;
rbits <<= (wordlength()-n);
x >>=n;
x |= rbits;
}
}

