void FUN1()
{
    int VAR1;
    char * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (char *)malloc(50*sizeof(char));
        memset(VAR2, '', 50-1); 
        VAR2[50-1] = ''; 
    }
    {
        char VAR3[100];
        memset(VAR3, '', 100-1);
        VAR3[100-1] = ''; 
        
        memmove(VAR3, VAR2, strlen(VAR3)*sizeof(char));
        VAR3[100-1] = '';
        FUN2(VAR3);
        free(VAR2);
    }
}