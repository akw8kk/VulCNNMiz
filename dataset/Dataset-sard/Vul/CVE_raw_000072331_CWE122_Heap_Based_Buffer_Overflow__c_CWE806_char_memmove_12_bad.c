void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    if(FUN2())
    {
        
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
    }
    else
    {
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
    {
        char VAR2[50] = "";
        
        memmove(VAR2, VAR1, strlen(VAR1)*sizeof(char));
        VAR2[50-1] = ''; 
        FUN3(VAR1);
        free(VAR1);
    }
}