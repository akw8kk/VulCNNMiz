void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    if(VAR4==5)
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
    
    if (FUN3(VAR1) <= 0)
    {
        FUN4("");
        FUN5(1);
    }
}