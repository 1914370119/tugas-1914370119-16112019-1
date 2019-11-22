#include <stdio.h>
int main()
{
int hasil=1 ,bil;
printf("masukan bilangan faktorial = ");
scanf("%d", & bil);
int i ;
for (i =1 ; i<=bil; i++)
{
hasil = i * hasil;
}
printf ("faktorial dari %d! = 5 x 4 x 3 x 2 x 1 =%d",bil,hasil);

}
