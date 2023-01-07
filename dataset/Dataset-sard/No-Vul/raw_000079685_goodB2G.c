static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(FUN2())
    {
        {
            
            size_t VAR3 = strlen(VAR1);
            char * VAR4 = FUN3(VAR5);
            
            if (VAR4 != NULL)
            {
                
                strncat(VAR1+VAR3, VAR4, 100-VAR3-1);
            }
        }
    }
    else
    {
        {
            
            size_t VAR3 = strlen(VAR1);
            char * VAR4 = FUN3(VAR5);
            
            if (VAR4 != NULL)
            {
                
                strncat(VAR1+VAR3, VAR4, 100-VAR3-1);
            }
        }
    }
    if(FUN2())
    {
        
        fprintf(VAR6, "", VAR1);
    }
    else
    {
        
        fprintf(VAR6, "", VAR1);
    }
}