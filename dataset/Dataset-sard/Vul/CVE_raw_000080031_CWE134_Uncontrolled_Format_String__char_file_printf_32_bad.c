void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char VAR4[100] = "";
    VAR1 = VAR4;
    {
        char * VAR1 = *VAR2;
        {
            
            size_t VAR5 = strlen(VAR1);
            VAR6 * VAR7;
            
            if (100-VAR5 > 1)
            {
                VAR7 = fopen(VAR8, "");
                if (VAR7 != NULL)
                {
                    
                    if (fgets(VAR1+VAR5, (int)(100-VAR5), VAR7) == NULL)
                    {
                        FUN2("");
                        
                        VAR1[VAR5] = '';
                    }
                    fclose(VAR7);
                }
            }
        }
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        
        FUN3(VAR1);
    }
}