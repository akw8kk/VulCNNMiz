void FUN1()
{
    char * VAR1;
    
    void (*VAR2) (char *) = VAR3;
    char * VAR4 = (char *)FUN2(50*sizeof(char));
    char * VAR5 = (char *)FUN2(100*sizeof(char));
    memset(VAR4, '', 50-1); 
    VAR4[50-1] = ''; 
    memset(VAR5, '', 100-1); 
    VAR5[100-1] = ''; 
    
    VAR1 = VAR4;
    
    FUN3(VAR1);
}