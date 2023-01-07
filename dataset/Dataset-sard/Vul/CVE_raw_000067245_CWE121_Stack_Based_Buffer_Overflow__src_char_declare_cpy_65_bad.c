void FUN1()
{
    char * VAR1;
    
    void (*VAR2) (char *) = VAR3;
    char VAR4[100];
    VAR1 = VAR4;
    
    memset(VAR1, '', 100-1); 
    VAR1[100-1] = ''; 
    
    FUN2(VAR1);
}