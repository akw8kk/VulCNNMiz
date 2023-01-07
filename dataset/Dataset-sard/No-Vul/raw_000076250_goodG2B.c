static void FUN1()
{
    int VAR1;
    char * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (char *)malloc(100*sizeof(char));
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
    }
    {
        size_t VAR3, VAR4;
        char VAR5[100];
        memset(VAR5, '', 100-1);
        VAR5[100-1] = ''; 
        VAR4 = strlen(VAR5);
        
        for (VAR3 = 0; VAR3 < VAR4; VAR3++)
        {
            VAR5[VAR3] = VAR2[VAR3];
        }
        VAR5[100-1] = '';
        FUN2(VAR5);
        free(VAR2);
    }
}