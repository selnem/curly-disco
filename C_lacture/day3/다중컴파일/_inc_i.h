

int inc_i(void);
int new_(int i);

static int i = 10;
int inc_i()
{
   i++;
   return i;
}
int new_(int i)
{
   static int val = 100;
   val += i;
   return val;
}
