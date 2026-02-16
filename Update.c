#include<stdio.h>

void leftslant(int);          //new little changes!!
void rightslant(int);         //this is fun, it allows you to be able to make the even iterations of the loop into a modified longer zigzag
int main(void)               
{
  int n=0,m=1,x=3;
do{
    if(x%2 != 0){
  leftslant(0);
  rightslant(0);
    }
    else{
      rightslant(3);
       leftslant(3);
    }
   x--;
}
while(x>0);
}


void leftslant(int sp1)
{
    int n=0;
    do
    {
    for(int i=(3+sp1); i>n; i--)
   {
   printf(" ");
   }
   printf("/\n");
   n++;
    }
    while(n<3);
}

 void rightslant(int sp2)
{
    int m=1;
    do
    {
    for(int i=0; i<(m+sp2); i++)
   {
   printf(" ");
   }
   m++;
   printf("\\\n");
    }
    while(m<=3);
}
