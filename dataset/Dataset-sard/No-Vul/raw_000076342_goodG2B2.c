static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(VAR2==5)
    {
        
        VAR1 = (char *)malloc(100*sizeof(char));
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
    }
    {
        char VAR3[100];
        memset(VAR3, '', 100-1);
        VAR3[100-1] = ''; 
        
        memmove(VAR3, VAR1, strlen(VAR3)*sizeof(char));
        VAR3[100-1] = '';
        FUN2(VAR3);
        free(VAR1);
    }
}