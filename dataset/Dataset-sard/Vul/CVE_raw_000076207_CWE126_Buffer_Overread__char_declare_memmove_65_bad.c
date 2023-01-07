void FUN1()
{
    char * VAR1;
    
    void (*VAR2) (char *) = VAR3;
    char VAR4[50];
    char VAR5[100];
    memset(VAR4, '', 50-1); 
    VAR4[50-1] = ''; 
    memset(VAR5, '', 100-1); 
    VAR5[100-1] = ''; 
    
    VAR1 = VAR4;
    
    FUN2(VAR1);
}