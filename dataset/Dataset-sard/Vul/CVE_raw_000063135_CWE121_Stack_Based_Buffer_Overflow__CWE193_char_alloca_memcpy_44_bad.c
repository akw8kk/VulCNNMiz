void FUN1()
{
    char * VAR1;
    
    void (*VAR2) (char *) = VAR3;
    char * VAR4 = (char *)FUN2((10)*sizeof(char));
    char * VAR5 = (char *)FUN2((10+1)*sizeof(char));
    
    VAR1 = VAR4;
    VAR1[0] = ''; 
    
    FUN3(VAR1);
}