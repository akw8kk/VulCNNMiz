void FUN1()
{
    char * VAR1;
    
    void (*VAR2) (char *) = VAR3;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(50*sizeof(char));
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    
    FUN2(VAR1);
}