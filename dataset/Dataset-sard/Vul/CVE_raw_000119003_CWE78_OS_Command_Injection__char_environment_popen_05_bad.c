void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    if(VAR4)
    {
        {
            
            size_t VAR5 = strlen(VAR1);
            char * VAR6 = FUN2(VAR7);
            
            if (VAR6 != NULL)
            {
                
                strncat(VAR1+VAR5, VAR6, 100-VAR5-1);
            }
        }
    }
    {
        VAR8 *VAR9;
        
        VAR9 = FUN3(VAR1, "");
        if (VAR9 != NULL)
        {
            FUN4(VAR9);
        }
    }
}