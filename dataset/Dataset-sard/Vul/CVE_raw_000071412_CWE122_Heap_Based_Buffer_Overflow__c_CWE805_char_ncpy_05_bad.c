void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(VAR2)
    {
        
        VAR1 = (char *)malloc(50*sizeof(char));
        VAR1[0] = ''; 
    }
    {
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        strncpy(VAR1, VAR3, 100-1);
        VAR1[100-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}