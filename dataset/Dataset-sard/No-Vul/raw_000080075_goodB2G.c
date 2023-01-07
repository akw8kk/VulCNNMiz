static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    goto VAR3;
VAR3:
    {
        
        size_t VAR4 = strlen(VAR1);
        VAR5 * VAR6;
        
        if (100-VAR4 > 1)
        {
            VAR6 = fopen(VAR7, "");
            if (VAR6 != NULL)
            {
                
                if (fgets(VAR1+VAR4, (int)(100-VAR4), VAR6) == NULL)
                {
                    FUN2("");
                    
                    VAR1[VAR4] = '';
                }
                fclose(VAR6);
            }
        }
    }
    goto VAR8;
VAR8:
    {
        char VAR9[100] = "";
        
        FUN3(VAR9, 100-1, "", VAR1);
        FUN2(VAR9);
    }
}