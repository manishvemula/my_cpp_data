#include<stdio.h>
int main()
{
    bool b=true; //false
    printf("\n bool b=%d size of bool b=%d",b,sizeof(b)); //1byte

    wchar_t wch='A'; 
    printf("\n wchar_t wch=%c size of wchar_t wch=%d",wch,sizeof(wch)); //2byte

    return 0;
}