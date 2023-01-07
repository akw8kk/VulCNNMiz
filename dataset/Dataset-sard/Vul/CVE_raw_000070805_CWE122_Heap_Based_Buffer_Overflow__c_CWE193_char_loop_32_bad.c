void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        char * VAR1 = *VAR2;
        
        VAR1 = (char *)malloc(10*sizeof(char));
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR4[10+1] = VAR5;
            size_t VAR6, VAR7;
            VAR7 = strlen(VAR4);
            
            
            for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
            {
                VAR1[VAR6] = VAR4[VAR6];
            }
            FUN2(VAR1);
            free(VAR1);
        }
    }
}