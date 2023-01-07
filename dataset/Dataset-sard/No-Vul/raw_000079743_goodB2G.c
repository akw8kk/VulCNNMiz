static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char VAR4[100] = "";
    VAR1 = VAR4;
    {
        char * VAR1 = *VAR2;
        {
            
            size_t VAR5 = strlen(VAR1);
            char * VAR6 = FUN2(VAR7);
            
            if (VAR6 != NULL)
            {
                
                strncat(VAR1+VAR5, VAR6, 100-VAR5-1);
            }
        }
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        
        FUN3("", VAR1);
    }
}