void FUN1()
{
    int VAR1,VAR2;
    char * VAR3;
    char VAR4[100] = "";
    VAR3 = VAR4;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            
            size_t VAR5 = strlen(VAR3);
            char * VAR6 = FUN2(VAR7);
            
            if (VAR6 != NULL)
            {
                
                strncat(VAR3+VAR5, VAR6, 100-VAR5-1);
            }
        }
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        
        fprintf(VAR8, VAR3);
    }
}