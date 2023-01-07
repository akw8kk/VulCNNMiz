static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char VAR4[50];
    char VAR5[100];
    memset(VAR4, '', 50-1); 
    VAR4[50-1] = ''; 
    memset(VAR5, '', 100-1); 
    VAR5[100-1] = ''; 
    {
        char * VAR1 = *VAR2;
        
        VAR1 = VAR5;
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            size_t VAR6, VAR7;
            char VAR8[100];
            memset(VAR8, '', 100-1);
            VAR8[100-1] = ''; 
            VAR7 = strlen(VAR8);
            
            for (VAR6 = 0; VAR6 < VAR7; VAR6++)
            {
                VAR8[VAR6] = VAR1[VAR6];
            }
            VAR8[100-1] = '';
            FUN2(VAR8);
        }
    }
}