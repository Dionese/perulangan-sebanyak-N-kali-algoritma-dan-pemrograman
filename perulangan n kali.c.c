//oleh dion baharudin
#include <stdio.h>

int perulangan (int n);
int main(void)
{
    int n;
    printf("PROGRAM PERULANGAN KALIMAT ALGORITMA DAN PEMROGRAMAN SEBANYAK (n)KALI\n\n");
    printf("Masukan Nilai (n) :");
    scanf("%d",&n);
    perulangan(n);
    getchar();
}
int perulangan(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("Algoritma dan pemrograman\n");
    return(i);
}
