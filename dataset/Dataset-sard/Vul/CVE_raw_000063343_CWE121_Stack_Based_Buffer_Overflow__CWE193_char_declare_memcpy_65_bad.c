void FUN1()
{
    char * VAR1;
    
    void (*VAR2) (char *) = VAR3;
    char VAR4[10];
    char VAR5[10+1];
    
    VAR1 = VAR4;
    VAR1[0] = ''; 
    
    FUN2(VAR1);
}