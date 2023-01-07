static void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[50];
    char VAR4[100];
    memset(VAR3, '', 50-1); 
    VAR3[50-1] = ''; 
    memset(VAR4, '', 100-1); 
    VAR4[100-1] = ''; 
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR4;
    }
    {
        size_t VAR5, VAR6;
        char VAR7[100];
        memset(VAR7, '', 100-1);
        VAR7[100-1] = ''; 
        VAR6 = strlen(VAR7);
        
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            VAR7[VAR5] = VAR2[VAR5];
        }
        VAR7[100-1] = '';
        FUN2(VAR7);
    }
}