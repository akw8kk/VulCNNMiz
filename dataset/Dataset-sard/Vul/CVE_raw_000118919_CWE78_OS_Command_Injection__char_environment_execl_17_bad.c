void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[100] = "";
    VAR2 = VAR3;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            
            size_t VAR4 = strlen(VAR2);
            char * VAR5 = FUN2(VAR6);
            
            if (VAR5 != NULL)
            {
                
                strncat(VAR2+VAR4, VAR5, 100-VAR4-1);
            }
        }
    }
    
    
    FUN3(VAR7, VAR7, VAR8, VAR9, VAR10, NULL);
}