void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[100] = VAR4;
    VAR2 = VAR3;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            
            size_t VAR5 = strlen(VAR2);
            char * VAR6 = FUN2(VAR7);
            
            if (VAR6 != NULL)
            {
                
                strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
            }
        }
    }
    
    if (FUN3(VAR2) <= 0)
    {
        FUN4("");
        FUN5(1);
    }
}