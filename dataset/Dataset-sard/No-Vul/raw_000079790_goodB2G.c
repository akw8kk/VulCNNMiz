static void FUN1()
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
        {
            char VAR7[100] = "";
            
            FUN3(VAR7, 100-1, "", VAR1);
            FUN4(VAR7);
        }
    }
}