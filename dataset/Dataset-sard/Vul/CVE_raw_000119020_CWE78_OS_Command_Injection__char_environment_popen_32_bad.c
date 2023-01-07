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
            char * VAR7 = FUN2(VAR8);
            
            if (VAR7 != NULL)
            {
                
                strncat(VAR1+VAR6, VAR7, 100-VAR6-1);
            }
        }
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            VAR9 *VAR10;
            
            VAR10 = FUN3(VAR1, "");
            if (VAR10 != NULL)
            {
                FUN4(VAR10);
            }
        }
    }
}