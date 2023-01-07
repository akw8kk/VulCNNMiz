void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    while(1)
    {
        
        VAR1 = (char *)malloc(50*sizeof(char));
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
        break;
    }
    {
        size_t VAR2, VAR3;
        char VAR4[100];
        memset(VAR4, '', 100-1);
        VAR4[100-1] = ''; 
        VAR3 = strlen(VAR4);
        
        for (VAR2 = 0; VAR2 < VAR3; VAR2++)
        {
            VAR4[VAR2] = VAR1[VAR2];
        }
        VAR4[100-1] = '';
        FUN2(VAR4);
        free(VAR1);
    }
}