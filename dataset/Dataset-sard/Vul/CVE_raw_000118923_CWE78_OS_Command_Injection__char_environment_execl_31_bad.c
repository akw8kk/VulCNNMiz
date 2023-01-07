void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    {
        
        size_t VAR3 = strlen(VAR1);
        char * VAR4 = FUN2(VAR5);
        
        if (VAR4 != NULL)
        {
            
            strncat(VAR1+VAR3, VAR4, 100-VAR3-1);
        }
    }
    {
        char * VAR6 = VAR1;
        char * VAR1 = VAR6;
        
        
        FUN3(VAR7, VAR7, VAR8, VAR9, VAR10, NULL);
    }
}