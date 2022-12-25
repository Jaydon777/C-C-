#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char usr_id[10];
    char chk[] = "@tci.ac.in";
    int n=0;
    scanf("%s", &usr_id);
    char *strstr(const char *usr_id, const char *chk);
    char pas[15];
    scanf("%s", &pas);
    if (isdigit(pas[0]))
    {
        n = 1;
        printf("Incorrect password");
    }
    else if(pas > 'A' && pas < 'Z'){
        n =0;
    }
    else if(pas > 'a' && pas < 'z'){
        n = 0;
    }
    return 0;
}
