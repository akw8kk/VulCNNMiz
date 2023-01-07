static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    while(1)
    {
        
        VAR1 = (char *)malloc(100*sizeof(char));
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
        break;
    }
    {
        char VAR2[100];
        memset(VAR2, '', 100-1);
        VAR2[100-1] = ''; 
        
        memmove(VAR2, VAR1, strlen(VAR2)*sizeof(char));
        VAR2[100-1] = '';
        FUN2(VAR2);
        free(VAR1);
    }
}