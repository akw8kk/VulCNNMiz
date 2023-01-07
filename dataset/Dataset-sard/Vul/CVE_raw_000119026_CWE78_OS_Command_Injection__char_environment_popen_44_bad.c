void FUN1()
{
    char * VAR1;
    
    void (*VAR2) (char *) = VAR3;
    char VAR4[100] = VAR5;
    VAR1 = VAR4;
    {
        
        size_t VAR6 = strlen(VAR1);
        char * VAR7 = FUN2(VAR8);
        
        if (VAR7 != NULL)
        {
            
            strncat(VAR1+VAR6, VAR7, 100-VAR6-1);
        }
    }
    
    FUN3(VAR1);
}