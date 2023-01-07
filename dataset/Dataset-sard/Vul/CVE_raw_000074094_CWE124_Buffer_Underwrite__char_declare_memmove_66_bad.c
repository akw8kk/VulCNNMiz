void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    char VAR3[100];
    memset(VAR3, '', 100-1);
    VAR3[100-1] = '';
    
    VAR1 = VAR3 - 8;
    
    VAR2[2] = VAR1;
    FUN2(VAR2);
}