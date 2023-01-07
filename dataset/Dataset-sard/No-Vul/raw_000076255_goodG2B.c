static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        char * VAR1 = *VAR2;
        
        VAR1 = (char *)malloc(100*sizeof(char));
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            size_t VAR4, VAR5;
            char VAR6[100];
            memset(VAR6, '', 100-1);
            VAR6[100-1] = ''; 
            VAR5 = strlen(VAR6);
            
            for (VAR4 = 0; VAR4 < VAR5; VAR4++)
            {
                VAR6[VAR4] = VAR1[VAR4];
            }
            VAR6[100-1] = '';
            FUN2(VAR6);
            free(VAR1);
        }
    }
}