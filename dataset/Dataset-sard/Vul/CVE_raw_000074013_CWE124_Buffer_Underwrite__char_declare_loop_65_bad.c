void FUN1()
{
    char * VAR1;
    
    void (*VAR2) (char *) = VAR3;
    char VAR4[100];
    memset(VAR4, '', 100-1);
    VAR4[100-1] = '';
    
    VAR1 = VAR4 - 8;
    
    FUN2(VAR1);
}