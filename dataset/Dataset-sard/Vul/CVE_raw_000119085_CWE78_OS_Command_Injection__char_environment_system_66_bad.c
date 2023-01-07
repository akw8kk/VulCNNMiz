void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    char VAR3[100] = VAR4;
    VAR1 = VAR3;
    {
        
        size_t VAR5 = strlen(VAR1);
        char * VAR6 = FUN2(VAR7);
        
        if (VAR6 != NULL)
        {
            
            strncat(VAR1+VAR5, VAR6, 100-VAR5-1);
        }
    }
    
    VAR2[2] = VAR1;
    FUN3(VAR2);
}