static void FUN1()
{
    char * VAR1;
    void (*VAR2) (char *) = VAR3;
    char VAR4[100] = "";
    VAR1 = VAR4;
    {
        
        size_t VAR5 = strlen(VAR1);
        
        if (100-VAR5 > 1)
        {
            
            if (fgets(VAR1+VAR5, (int)(100-VAR5), stdin) != NULL)
            {
                
                VAR5 = strlen(VAR1);
                if (VAR5 > 0 && VAR1[VAR5-1] == '')
                {
                    VAR1[VAR5-1] = '';
                }
            }
            else
            {
                FUN2("");
                
                VAR1[VAR5] = '';
            }
        }
    }
    FUN3(VAR1);
}