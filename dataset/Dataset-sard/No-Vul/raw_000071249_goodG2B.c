static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        size_t VAR2;
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        for (VAR2 = 0; VAR2 < 100; VAR2++)
        {
            VAR1[VAR2] = VAR3[VAR2];
        }
        VAR1[100-1] = ''; 
        FUN3(VAR1);
        free(VAR1);
    }
}