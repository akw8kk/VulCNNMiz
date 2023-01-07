static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
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
        FUN3(VAR4);
        free(VAR1);
    }
}