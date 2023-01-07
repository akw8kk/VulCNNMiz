void FUN1()
{
    char * VAR1;
    char VAR2[100];
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    
    VAR1 = VAR2 - 8;
    FUN2(VAR1);
}