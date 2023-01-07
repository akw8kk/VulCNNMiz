void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char VAR4[100] = VAR5;
    VAR1 = VAR4;
    {
        char * VAR1 = *VAR2;
        {
            
            size_t VAR6 = strlen(VAR1);
            
            if (100-VAR6 > 1)
            {
                
                if (fgets(VAR1+VAR6, (int)(100-VAR6), stdin) != NULL)
                {
                    
                    VAR6 = strlen(VAR1);
                    if (VAR6 > 0 && VAR1[VAR6-1] == '')
                    {
                        VAR1[VAR6-1] = '';
                    }
                }
                else
                {
                    FUN2("");
                    
                    VAR1[VAR6] = '';
                }
            }
        }
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            VAR7 *VAR8;
            
            VAR8 = FUN3(VAR1, "");
            if (VAR8 != NULL)
            {
                FUN4(VAR8);
            }
        }
    }
}