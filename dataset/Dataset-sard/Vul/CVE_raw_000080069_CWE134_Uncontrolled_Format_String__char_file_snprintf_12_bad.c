void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(FUN2())
    {
        {
            
            size_t VAR3 = strlen(VAR1);
            VAR4 * VAR5;
            
            if (100-VAR3 > 1)
            {
                VAR5 = fopen(VAR6, "");
                if (VAR5 != NULL)
                {
                    
                    if (fgets(VAR1+VAR3, (int)(100-VAR3), VAR5) == NULL)
                    {
                        FUN3("");
                        
                        VAR1[VAR3] = '';
                    }
                    fclose(VAR5);
                }
            }
        }
    }
    else
    {
        
        strcpy(VAR1, "");
    }
    if(FUN2())
    {
        {
            char VAR7[100] = "";
            
            FUN4(VAR7, 100-1, VAR1);
            FUN3(VAR7);
        }
    }
    else
    {
        {
            char VAR7[100] = "";
            
            FUN4(VAR7, 100-1, "", VAR1);
            FUN3(VAR7);
        }
    }
}