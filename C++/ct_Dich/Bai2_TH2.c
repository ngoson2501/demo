#include <conio.h>
#include <stdio.h>
#include <string.h>

struct trangThai
{
    int output_chucai, output_so, output_khac;
};

int ktKytu(char c)
{
    if(((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z')))
    {
        return 1;// Chu cai la 1.
    }
    if((c>='0')&&(c<='9')) return 0;// So la 0.
    return -1; // Ky tu khac la -1.
}
int main()
{
    struct trangThai s[2];
    s[0].output_chucai=1;// Trang thai s0 dau vao la cai thi chuyen sang s1.
    s[0].output_so=-1; // Loi la -1
    s[0].output_khac=-1;
    
    s[1].output_chucai=1;
    s[1].output_so=1; // Quay lai s1
    s[1].output_khac=2; // Chuyen sang s2/
    
    char token[100];
    printf("Nhap chuoi\n");
    scanf("%s", &token);
    char t[10]="+";
    strcat(token, t);
    
    int state=0;
    for(int i=0; i<=strlen(token)-1;i++)
    {
        int kt=ktKytu(token[i]);
        switch (kt)
        {
            case 0: state=s[state].output_so; break;
            case 1: state=s[state].output_chucai; break;
            case -1: state=s[state].output_khac; break;
        }
        if(state==-1) 
        {
            printf("Error!!!\n");
            break;
        }
        if(state==2) 
        {
            if(i==strlen(token)-1)
             { 
                 printf("OK\n");
                 break;
             }
             else 
             {
                printf("Error!!!\n");
                break;
             }
             
        }
    }
    
    getch();
    return 0;
}

