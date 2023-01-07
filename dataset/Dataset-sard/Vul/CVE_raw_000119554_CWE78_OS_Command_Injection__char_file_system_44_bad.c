void FUN1()
{
    char * VAR1;
    
    void (*VAR2) (char *) = VAR3;
    char VAR4[100] = VAR5;
    VAR1 = VAR4;
    {
        
        size_t VAR6 = strlen(VAR1);
        VAR7 * VAR8;
        
        if (100-VAR6 > 1)
        {
            VAR8 = fopen(VAR9, "");
            if (VAR8 != NULL)
            {
                
                if (fgets(VAR1+VAR6, (int)(100-VAR6), VAR8) == NULL)
                {
                    FUN2("");
                    
                    VAR1[VAR6] = '';
                }
                fclose(VAR8);
            }
        }
    }
    
    FUN3(VAR1);
}