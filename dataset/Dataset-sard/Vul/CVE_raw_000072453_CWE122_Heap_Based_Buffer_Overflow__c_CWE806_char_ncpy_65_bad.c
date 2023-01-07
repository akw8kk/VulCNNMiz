void FUN1()
{
    char * VAR1;
    
    void (*VAR2) (char *) = VAR3;
    VAR1 = (char *)malloc(100*sizeof(char));
    
    memset(VAR1, '', 100-1); 
    VAR1[100-1] = ''; 
    
    FUN2(VAR1);
}