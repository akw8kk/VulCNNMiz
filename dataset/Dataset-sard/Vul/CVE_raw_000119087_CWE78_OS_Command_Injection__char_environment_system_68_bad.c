void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    {
        
        size_t VAR4 = strlen(VAR1);
        char * VAR5 = FUN2(VAR6);
        
        if (VAR5 != NULL)
        {
            
            strncat(VAR1+VAR4, VAR5, 100-VAR4-1);
        }
    }
    VAR7 = VAR1;
    FUN3();
}