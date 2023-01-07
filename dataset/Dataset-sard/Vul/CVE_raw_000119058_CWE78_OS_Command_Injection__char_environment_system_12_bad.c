void FUN1()
{
    char * VAR1;
    char VAR2[100] = VAR3;
    VAR1 = VAR2;
    if(FUN2())
    {
        {
            
            size_t VAR4 = strlen(VAR1);
            char * VAR5 = FUN3(VAR6);
            
            if (VAR5 != NULL)
            {
                
                strncat(VAR1+VAR4, VAR5, 100-VAR4-1);
            }
        }
    }
    else
    {
        
        strcat(VAR1, "");
    }
    
    if (FUN4(VAR1) <= 0)
    {
        FUN5("");
        FUN6(1);
    }
}