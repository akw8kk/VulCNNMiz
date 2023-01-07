void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        VAR1 = (char *)malloc(50*sizeof(char));
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
    else
    {
        
        VAR1 = (char *)malloc(100*sizeof(char));
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
    }
    {
        char VAR2[100];
        memset(VAR2, '', 100-1);
        VAR2[100-1] = ''; 
        
        memcpy(VAR2, VAR1, strlen(VAR2)*sizeof(char));
        VAR2[100-1] = '';
        FUN3(VAR2);
        free(VAR1);
    }
}